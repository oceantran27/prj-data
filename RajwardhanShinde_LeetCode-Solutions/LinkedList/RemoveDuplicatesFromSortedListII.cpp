#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode(0);
        ListNode *tail = dummy;
        int flag = 0;
        while(head) {
            while(head && head->next && head->val == head->next->val) {
                flag = 1;
                head = head->next;
            }
            if(flag == 0) {
                tail->next = head;
                tail = head;
            }
            head = head->next;
            flag = 0;
        }
        tail->next = NULL;
        return dummy->next;
    }
};
