#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
class Solution {
   public:
    int minElements(vector<int>& nums, int limit, int goal) {
        LL sum = 0;
        for (auto& x : nums) sum += x;
        LL diff = abs(sum - goal);
        return (diff + limit - 1) / limit;
    }
};
