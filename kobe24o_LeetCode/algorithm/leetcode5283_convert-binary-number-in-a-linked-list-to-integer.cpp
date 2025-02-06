#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum = 0;
        while(head)
        {
        	sum = sum*2+head->val;
            head = head->next;
        }
        return sum;
    }
};