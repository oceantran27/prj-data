#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/check-if-n-and-its-double-exist/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(N)
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for (int n : arr) {
            if (s.count(2 * n) || (n % 2 == 0 && s.count(n / 2))) return true;
            s.insert(n);
        }
        return false;
    }
};