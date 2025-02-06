/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    int index = 0;
    int listlength = 1;
    struct ListNode *newlist = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tail = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(head == NULL){
        return NULL;
    }
    tail = head;
    newlist = head;
    while(tail->next){              //����������
        tail = tail->next;
        listlength++;
    }
    k = k % listlength;             //k���ܴ�������ĳ���
    if(k == 0){                     //k����������,����ת
        return head;
    }
    k = listlength - k;             //�ƶ�ǰ��listlength-k���ڵ㵽�Ҳ�,��k���ڵ㲻��
    tail->next = head;              //β�ڵ������׽ڵ�
    for(index; index < k-1; index++){      //�Ҷ�������ͷ
        newlist = newlist->next;
    }
    head = newlist->next;           //������ͷ
    newlist->next = NULL;           //�����β��ֵNULL
    return head;                    //��������ͷ���
}