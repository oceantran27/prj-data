#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// prob1290: Convert Binary Number in a Linked List to Integer

/*
 * https://leetcode-cn.com/problems/convert-binary-number-in-a-linked-list-to-integer/
 */

#include "include/Node.h"

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = 0;
        ListNode *iter = head;
        while(iter)
        {
            num <<= 1;
            num += iter -> val;
            iter = iter -> next;
        }
        return num;
    }
};
