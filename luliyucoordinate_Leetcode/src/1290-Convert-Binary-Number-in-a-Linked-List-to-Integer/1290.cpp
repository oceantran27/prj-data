#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int getDecimalValue(ListNode* head) 
    {
        int res = 0;
        while (head != nullptr)
        {
            res = (res << 1) | head->val;
            head = head->next;
        }
        return res;
    }
};