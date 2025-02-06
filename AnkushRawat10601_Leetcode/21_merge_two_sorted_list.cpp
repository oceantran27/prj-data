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
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1==NULL)
    {return l2;}
    if(l2==NULL)
    {return l1;}
    struct ListNode* result=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p=result;
    while(l1!=NULL&&l2!=NULL)
    {
        if(l1->val>l2->val)
        {
            result->next=l2;
            result=result->next;
            l2=l2->next;
        }else
        {
            result->next=l1;
            result=result->next;
            l1=l1->next;
        }
    }
    if(l1==NULL)
    {
        result->next=l2;
    }else if(l2==NULL)
    {
        result->next=l1;
    }
    return p->next;
}