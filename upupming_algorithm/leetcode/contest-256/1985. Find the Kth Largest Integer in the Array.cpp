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
    string kthLargestNumber(vector<string> &nums, int k) {
        sort(nums.begin(), nums.end(), [](string &a, string &b) {
            if (a.length() == b.length()) {
                return a > b;
            }
            return a.length() > b.length();
        });
        return nums[k - 1];
    }
};
