#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
    string generateTheString(int n) {
        return n % 2 ? string(n, 'a') : string(n - 1, 'a') + 'b';
    }
};