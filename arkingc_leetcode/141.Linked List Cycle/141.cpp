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
    bool hasCycle(ListNode *head) {
        ListNode *slow = head,*fast = head;
        while(fast){
            if(fast->next){
                fast = fast->next->next;
                slow = slow->next;
                if(fast == slow)    return true;
            }
            else
                return false;
        }
        return false;
    }
};