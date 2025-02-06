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

// string
class Solution {
public:
    int longestContinuousSubstring(string s) {
        int result = 0;
        for (int i = 0, l = 0; i < size(s); ++i) {
            ++l;
            if (i + 1 == size(s) || s[i] + 1 != s[i + 1]) {
                result = max(result, l);
                l = 0;
            }
        }
        return result;
    }
};
