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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode **list = &head;
    
        while (*list != nullptr)
        {
            if ((*list)->val == val)
            {
                *list = (*list)->next;
            }
            else
            {
                list = &(*list)->next;
            }
        }
    
        return head;
    }
};