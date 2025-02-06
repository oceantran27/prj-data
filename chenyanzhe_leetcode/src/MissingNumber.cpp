#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "MissingNumber.hpp"

int MissingNumber::missingNumber(vector<int> &nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int t = nums[i];
        while (t < n && nums[t] != t) {
            int nt = nums[t];
            nums[t] = t;
            t = nt;
        }
    }

    for (int i = 0; i < n; i++)
        if (nums[i] != i)
            return i;

    return n;
}
