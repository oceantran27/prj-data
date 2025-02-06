#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

// math, linear search, bit manipulations
class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int64_t i = 1; i <= 60; ++i) {
            if (num1 - i * num2 < 0) {
                break;
            }
            if (__builtin_popcountll(num1 - i * num2) <= i && i <= num1 - i * num2) {
                return i;
            }
        }
        return -1;
    }
};
