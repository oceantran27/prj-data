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
    int numComponents(ListNode* head, vector<int>& G) {
        unordered_set s(G.begin(), G.end());
        int ans = 0;
        while(head)
        {
        	if(s.count(head->val) && (!head->next || !s.count(head->next->val)))
        		ans++;
        	head = head->next;
        }
        return ans;
    }
};