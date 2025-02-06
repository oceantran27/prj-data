#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn)
// Space: O(1)

class Solution {
public:
    int fixedPoint(vector<int>& A) {
        int left = 0, right = A.size() - 1;
        while (left <= right) {
            const auto& mid = left + (right - left) / 2;
            if (A[mid] >= mid) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return A[left] == left ? left : -1;
    }
};
