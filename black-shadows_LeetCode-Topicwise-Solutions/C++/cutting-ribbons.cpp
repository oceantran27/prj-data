#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogr), r is sum(ribbons)/k
// Space: O(1)

class Solution {
public:
    int maxLength(vector<int>& ribbons, int k) {
        int64_t left = 1, right = accumulate(cbegin(ribbons), cend(ribbons), 0LL) / k;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (!check(ribbons, k, mid)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return right;
    }

private:
    bool check(const vector<int>& ribbons, int k, int s) {
        return accumulate(cbegin(ribbons), cend(ribbons), 0LL,
                          [&s](auto total, auto x) {
                              return total + x / s;
                          }) >= k;
    }
};
