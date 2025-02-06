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
    vector<int> twoSum(vector<int> &num, int target) {
        vector<int> ans(2);
        int l = 0, r = num.size() - 1;
        while (l <= r) {
            int sum = num[l] + num[r];
            if (sum == target) {
                ans = {l + 1, r + 1};
                break;
            } else if (sum > target)
                r--;
            else
                l++;
        }
        return ans;
    }
};