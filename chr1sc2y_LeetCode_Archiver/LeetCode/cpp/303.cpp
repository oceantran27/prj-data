#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int> nums) {
        int size = nums.size();
        sum = vector<int>(size + 1, 0);
        for (int i = 0; i < size; ++i)
            sum[i + 1] = sum[i] + nums[i];
    }
    int sumRange(int i, int j) {
        return sum[j + 1] - sum[i];
    }
};