#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <poll.h>
 
#define MAX_FD_NUM 20
#define MAXLEN 1024
 
int main(int argc,char* argv[])
{
    printf("server start up\n");
 
    if(argc <= 2)
    {
        printf("usage:%s ip port\n",basename(argv[0]));
        return 1;
    }
 
    //IP��ַ
    const char* ip = argv[1];
    //�˿ں�
    int port = atoi(argv[2]);
    //�ں˼������е���󳤶ȣ���ȫ���ӵ�socket��
    //int backlog = atoi(argv[3]);
 
    //����socket	(TIP/IPЭ���壬��ʽsocket)
    int server_sockfd = socket(PF_INET,SOCK_STREAM,0);
 
    //TCP/IPЭ�����socket��ַ�ṹ��
    struct sockaddr_in server_addr;
    bzero(&server_addr,sizeof(server_addr));
    server_addr.sin_family = AF_INET;			//TCP/IPv4�ĵ�ַ��
    inet_pton(AF_INET,ip,&server_addr.sin_addr);		//��IP��ַ�ַ���ת��Ϊ�����Ƶ�����������addr.sin_server_addr
    server_addr.sin_port = htons(port);			//�˿ڣ�host to net���������ֽ���С�ˣ�ת��Ϊ�����ֽ��򣨴�ˣ�
 
    //���ļ�������sock��socket��ַ���������������Ҫ���ͻ����Զ��󶨵�ַ
    //ע����Ҫǿ��ת��Ϊ struct sockaddr*
    int ret = bind(server_sockfd,(struct sockaddr*)&server_addr,sizeof(server_addr));
    assert(ret != -1);
 
    //����
    ret = listen(server_sockfd,MAX_FD_NUM-1);
    assert(ret != -1);
 
    //�ȴ��ͻ�����Щ���ӵ���ع���
    sleep(3);
 
    //�ͻ��˵�ַ��Ϣ
    struct sockaddr_in client_addr;
    socklen_t client_addr_len = sizeof(struct sockaddr_in);
 
    //poll fds
    struct pollfd pollfdArry[MAX_FD_NUM];
    for(int i=0;i<MAX_FD_NUM;++i)
    {
        pollfdArry[i].fd = -1;
    }
 
    //insert the server socket fd
    pollfdArry[0].fd = server_sockfd;
    pollfdArry[0].events = POLLIN;
 
    int cur_fd_num = 1;
    char buf[MAXLEN]={0};
 
    //
    while (1)
    {
        int nready = poll(pollfdArry,cur_fd_num,-1);
        // server socket fd
        // ���յ��µ�����
        if(pollfdArry[0].revents & POLLIN)
        {
            if(cur_fd_num > MAX_FD_NUM)
            {
                printf("socket num to much\n");
            }
            else
            {
                //��������,���������ܵ�Զ��sock��ַ��Ϣ�����ڵڶ���������
                //ֻ�ǴӼ���������ȡ�����ӣ���ʹ�ͻ����Ѿ��Ͽ���������Ҳ��accept�ɹ�
                int client_sockfd = accept(server_sockfd,(struct sockaddr*)&client_addr,&client_addr_len);
                if(client_sockfd < 0)
                {
                   perror("accept");
                }
                else
                {
                    //inet_ntoa(struct addr_in) ��IP��ַת��Ϊ�ַ���������
                    printf("accept client_addr %s\n",inet_ntoa(client_addr.sin_addr));
                    for(int i=0;i<MAX_FD_NUM;++i)
                    {
                        if(pollfdArry[i].fd == -1)
                        {
                            pollfdArry[i].fd = client_sockfd;
                            pollfdArry[i].events = POLLIN;
                            cur_fd_num++;
                            break;
                        }
 
                    }
                }
            }
            if(--nready <= 0)
            {
                continue;
            }
        }
 
        // �ж�socket������û�пɶ����¼� 
        // ��pollfdArry����ȥ����һ��ȥ����
        for(int i=0;i<MAX_FD_NUM;++i)
        {
            if(pollfdArry[i].fd < 0)
            {
                continue;
            }
 
            if(pollfdArry[i].revents & (POLLIN |POLLERR))
            {
                int n = recv(pollfdArry[i].fd,buf,MAXLEN,0);
                if(n < 0)
                {
                    if(ECONNRESET == errno)
                    {
                        close(pollfdArry[i].fd);
                        pollfdArry[i].fd = -1;
                        cur_fd_num--;
                    }
                    else
                    {
                        perror("recv");
                    }
                }
                else if(n == 0)
                {
                    close(pollfdArry[i].fd);
                    pollfdArry[i].fd = -1;
                    cur_fd_num--;
                }
                else
                {
                    printf("recived:%s\n",buf);
                }
 
            }
            if(--nready)
            {
                break;
            }
        }
    }
 
 
    //�ر����ӣ�ʵ��ֻ��socket������-1,��������Ϊ0�Ż������ر�
    for(int i=0;i<MAX_FD_NUM;++i)
    {
        if(pollfdArry[i].fd != -1)
        {
            close(pollfdArry[i].fd);
        }
    }
    return 0;
}