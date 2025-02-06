#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "FindTheDuplicateNumber.hpp"

int FindTheDuplicateNumber::findDuplicate(vector<int> nums) {
    int l = 1;
    int r = nums.size();

    while (l < r) {
        int m = (l + r) / 2;
        int count = 0;

        for (auto n : nums) {
            if (n <= m)
                count++;
        }

        if (count > m) {
            // duplicates must be in [l, m]
            r = m;
        } else {
            // duplicates must be in [m + 1, r]
            l = m + 1;
        }
    }

    return l;
}