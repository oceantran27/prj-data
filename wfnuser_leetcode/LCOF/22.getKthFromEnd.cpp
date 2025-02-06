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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        vector<ListNode*> cache;

        while (head != NULL) {
            cache.push_back(head);
            head = head->next;
        }

        if (cache.size() == 0) return NULL;
        return cache[cache.size() - k];
    }
};