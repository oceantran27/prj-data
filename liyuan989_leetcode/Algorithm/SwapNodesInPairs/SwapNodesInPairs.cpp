#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Given a linked list, swap every two adjacent nodes and return its head.

For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.

Your algorithm should use only constant space.
You may not modify the values in the list, only nodes itself can be changed.
*/

#include <stdio.h>

// Definition for singly-linked list.
struct ListNode
{
    int        val;
    ListNode*  next;

    ListNode(int x) :
        val(x), next(NULL)
    {
    }
};

class Solution
{
public:
    ListNode* swapPairs(ListNode* head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode node(0);
        ListNode* p = &node;
        p->next = head;
        while (p && p->next && p->next->next)
        {
            ListNode* prev = p->next;
            ListNode* last = p->next->next;
            p->next = last;
            prev->next = last->next;
            last->next = prev;
            p = prev;
        }
        return node.next;
    }
};
