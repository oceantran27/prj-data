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
    void rotate(vector<int> &nums, int k) {
        k %= nums.size();
        while (k > 0) {
            int &temp = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), temp);
            --k;
        }
    }
};
