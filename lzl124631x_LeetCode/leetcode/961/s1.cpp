#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/n-repeated-element-in-size-2n-array
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(N)
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> s;
        for (int n : A) {
            if (s.find(n) != s.end()) return n;
            s.insert(n);
        }
    }
};