class Solution {
    String longestPalindrome(String s) {
        //Manacher�㷨
        if(s.length() == 0 || s.length() == 1)
            return s;
        //�ֽ�s��Ϊ����Ϊ�����Ĵ�
        String news = "&#";
        for(int i=0;i<s.length();i++)
        {
            news += s.charAt(i);
            news += '#';
        }
        news += '\0';
        int len = news.length();   //�´��ĳ���
        int maxlen = -1;  //��¼������Ӵ��ĳ���
        int maxid = 0; //��¼������Ӵ�������
        int[] p = new int[len];  //p[i]��¼��iΪ���ĵ�������Ӵ��İ뾶����maxlen = p[i] - 1
        int id = 0; //��ǰȷ����������
        int mx = 0;  //��ǰ���������ܵ�����ұ߽��±�
        for(int i=1;i<len;i++)
        {
            if(i < mx)  //i�ڵ�ǰ�Ļ����Ӵ��У�ȷ����iΪ���ĵĹ��ɵ���Ļ��İ뾶
                p[i] = Math.min(mx - i, p[2 * id -i]);  //i����id�ĶԳ��±�Ϊ2*id-1��p[2*id-1]����뾶�Ѿ�ȷ�������ݶԳƣ�p[i]Ӧ��ȡ��С��һ��
            else
                p[i] = 1;  //��������Ϊ�����Ӵ�
            while(news.charAt(i - p[i]) == news.charAt(i + p[i]))  //ȷ����iΪ���ĵ�����İ뾶
                p[i]++;
            if(i + p[i] > mx)  //������mx�ķ�Χ��Ӧ�ø���mx�ͶԳ�����
            {
                id = i;
                mx = i + p[i];
            }
            if(maxlen < p[i] - 1)
            {
                maxlen = p[i] - 1;
                maxid = i;
            }
        }  
        String result = "";
        for(int i = maxid - maxlen;i<=maxid + maxlen;i++)
            if(news.charAt(i) != '#')
                result += news.charAt(i);
        return result;
    }
}