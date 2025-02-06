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
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        
        while(head!=NULL&&head->next!=NULL&&head->next->next != NULL)
        {
            ListNode* rear = head,*prev;
            while (rear->next!=NULL) 
            {
                prev=rear;
                rear = rear->next;
            }

            rear->next = head->next;
            head->next = rear;
            prev->next = NULL;
            head = head->next->next;
        }
    }
};
