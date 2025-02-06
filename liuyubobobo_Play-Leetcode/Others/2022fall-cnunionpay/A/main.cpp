#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/// Source : https://leetcode.cn/contest/cnunionpay2022/problems/VLNEbD/
/// Author : liuyubobobo
/// Time   : 2022-09-23

#include <iostream>

using namespace std;


/// Linked List
/// Time Complexity: O(n)
/// Space Complexity: O(1)

/// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reContruct(ListNode* head) {

        ListNode* dummyHead = new ListNode(-1);
        dummyHead->next = head;

        ListNode* pre = dummyHead;
        while(pre->next){
            if(pre->next->val % 2 == 0) pre->next = pre->next->next;
            else pre = pre->next;
        }
        return dummyHead->next;
    }
};


int main() {

    return 0;
}
