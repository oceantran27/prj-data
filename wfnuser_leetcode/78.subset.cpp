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
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> q;
        q.push_back(vector<int>());

        for (int i = 0; i < nums.size(); i++) {
            int size = q.size();
            for (int j = 0; j < size; j++) {
                vector<int> tmp = q[j];
                tmp.push_back(nums[i]);
                q.push_back(tmp);
            }
        }

        return q;
    }
};