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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        int len = 1;
        ListNode *ptr = head;
        while(ptr->next) {
            len++;
            ptr = ptr->next;
        }
        ptr->next = head;
        int index = len - k % len;
        for(int i = 0; i < index; i++) 
            ptr = ptr->next;
        head = ptr->next;
        ptr->next = NULL;
        return head;
    }
};
