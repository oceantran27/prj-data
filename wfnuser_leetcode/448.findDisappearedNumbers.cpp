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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> m;

        for (auto num: nums) {
            m[num]++;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (!m[i]) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};