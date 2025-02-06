#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

// array, two pointers
class Solution {
public:
    int captureForts(vector<int>& forts) {
        int result = 0;
        for (int right = 0, left = 0; right < size(forts); ++right) {
            if (!forts[right]) {
                continue;
            }
            if (forts[right] == -forts[left]) {
                result = max(result, right - left - 1);
            }
            left = right;
        }
        return result;
    }
};
