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
    ListNode *removeNthFromEnd(ListNode *head, int n) 
    {
        ListNode *tempHead = new ListNode(0);
        tempHead->next = head;
        ListNode *first = tempHead, *second = tempHead;
        
        for(int i = 0; i < n+1; i++)
            first = first -> next;

        while(first) 
        {
            first = first -> next;
            second = second -> next;
        }
        
        second->next = second->next->next;
        return tempHead->next;
    }
};