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
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        int m = findNums.size();
        if (m == 0) {
            return {};
        }
        
        vector<int> result(m);
        unordered_map<int, int> table;
        stack<int> St;
        for (int num : nums) {
            while (!St.empty() && St.top() < num) {
                table[St.top()] = num;
                St.pop();
            }
            St.push(num);
        }
        
        for (int i = 0; i < m; ++i) {
            if (table.find(findNums[i]) != table.end()) {
                result[i] = table[findNums[i]];
            }
            else {
                result[i] = -1;
            }
        }
        
        return result;
    }
};
