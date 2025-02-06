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
    int validSubarrays(vector<int>& nums) {
        stack<int> St;
        int total = 0;
        for (int num : nums) {
            while (!St.empty() && num < St.top()) {
                St.pop();
            }
            St.push(num);
            total += St.size();
        }
        return total;
    }
};
