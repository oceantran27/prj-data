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
    vector<int> numberOfPairs(vector<int>& nums) {
        int cnt[101] = {}, pairs = 0;
        for (int n : nums)
            pairs += ++cnt[n] % 2 == 0 ? 1 : 0;
        return { pairs, (int)nums.size() - pairs * 2 };
    }
};
