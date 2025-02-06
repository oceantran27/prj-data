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
    long long maxAlternatingSum(vector<int>& nums) {
        long long even = 0, odd = 0;
        for(auto it:nums)
        {
            long long o = odd;
            odd = max(odd,even-it);
            even = max(even,o+it);
        }
        return max(even,odd);
    }
};