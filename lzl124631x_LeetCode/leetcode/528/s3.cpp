#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/random-pick-with-weight/
// Author: github.com/lzl124631x
// Time:
//      Solution: O(W)
//      pickIndex: O(log(W))
// Space: O(W)
class Solution {
private:
    vector<int> sums;
public:
    Solution(vector<int> w): sums(w) {
        partial_sum(sums.begin(), sums.end(), sums.begin());
    }
    
    int pickIndex() {
        return upper_bound(sums.begin(), sums.end(), rand() % sums.back()) - sums.begin();
    }
};