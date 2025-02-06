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
    unordered_map<int, int> cnt;
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for(auto num: nums) {
            if (cnt[num]) {
                ans.push_back(num);
            }
            cnt[num]++;
        }

        return ans;
    }
};