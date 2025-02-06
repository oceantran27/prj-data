/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* cur = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* new_head = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(head == NULL || head->next == NULL){
        return head;
    }
//����������㣬���ص�ʱ��cur�ĵ�ַ��new_head�ĵ�ַ��һ�µġ�����cur���൱�ڲ���new_head��head->next = NULL ���ǽ��Ѿ����غ��ֵ������
    cur = head->next;
    new_head = reverseList(cur);
    head->next = NULL;
    cur->next = head;
    return new_head;
}