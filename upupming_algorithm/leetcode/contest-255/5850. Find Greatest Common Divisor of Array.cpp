#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int findGCD(vector<int>& nums) {
        int mi = INT_MAX, ma = INT_MIN;
        for (auto& a : nums) {
            mi = min(a, mi);
            ma = max(a, ma);
        }
        return __gcd(mi, ma);
    }
};
