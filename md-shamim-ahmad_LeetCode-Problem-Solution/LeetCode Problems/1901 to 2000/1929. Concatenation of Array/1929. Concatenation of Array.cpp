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
    vector<int> getConcatenation(vector<int> &nums) {
        vector<int> arr(2 * nums.size());
        for (int i = 0; i < nums.size(); i++) {
            arr[i] = nums[i];
            arr[i + nums.size()] = nums[i];
        }
        return arr;
    }
};