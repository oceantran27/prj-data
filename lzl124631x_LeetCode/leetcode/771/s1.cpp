#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/jewels-and-stones/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(N)
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> s(J.begin(), J.end());
        int ans = 0;
        for (char c : S) ans += s.count(c);
        return ans;
    }
};