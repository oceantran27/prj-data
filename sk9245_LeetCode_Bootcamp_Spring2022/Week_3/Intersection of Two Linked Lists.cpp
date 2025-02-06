#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        while(a != b){
            if(a == NULL){
                a = headB;
            }
            else{
                a = a -> next;
            }
            if(b == NULL){
                b = headA;
            }
            else{
                b = b -> next;
            }
        }
        return a;
    }
};
