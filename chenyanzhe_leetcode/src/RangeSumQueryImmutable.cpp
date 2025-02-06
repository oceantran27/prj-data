#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "RangeSumQueryImmutable.hpp"

NumArray::NumArray(vector<int> &nums) : accs(nums.begin(), nums.end()) {
    for (int i = 1; i < nums.size(); i++)
        accs[i] += accs[i - 1];
}

int NumArray::sumRange(int i, int j) {
    return i == 0 ? accs[j] : accs[j] - accs[i - 1];
}