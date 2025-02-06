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

// math, bitmasks
class Solution {
public:
    string kthLuckyNumber(int k) {
        string result;
        for (++k; k != 1; k >>= 1) {
            result.push_back(k & 1 ? '7' : '4');
        }
        reverse(begin(result), end(result));
        return result;
    }
};
