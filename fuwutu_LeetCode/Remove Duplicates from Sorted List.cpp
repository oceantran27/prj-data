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
        ListNode* cur = head;
        while (NULL != cur)
        {
            ListNode* next = cur->next;
            if ((NULL != next) && (cur->val == next->val))
            {
                cur->next = next->next;
            }
            else
            {
                cur = cur->next;
            }
        }
        return head;
    }
};
