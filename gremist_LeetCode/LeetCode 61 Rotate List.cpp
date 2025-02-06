#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 61 Rotate List.cpp

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return NULL;
        
        int size = 1;
        ListNode *pi = head;
        while (pi->next) {
            size++;
            pi = pi->next;
        }
        pi->next = head;
        
        for (int i = 0; i < (size - (k % size)) % size; i++) {
            pi = pi->next;
        }
        head = pi->next;
        pi->next = NULL;
        return head;
    }
};