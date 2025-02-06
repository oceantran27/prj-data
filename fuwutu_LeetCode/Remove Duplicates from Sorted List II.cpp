#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode help(0);
        help.next = head;
        ListNode* cur = &help;
        while (cur != NULL)
        {
            if (cur->next != NULL && cur->next->next != NULL && cur->next->val == cur->next->next->val)
            {
                int val = cur->next->val;
                ListNode* next = cur->next->next->next;
                while (next != NULL && next->val == val)
                {
                    next = next->next;
                }
                cur->next = next;
            }
            else
            {
                cur = cur->next;
            }
        }
        
        return help.next;
    }
};
