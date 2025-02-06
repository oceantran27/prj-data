#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/defanging-an-ip-address/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for (char c : address) {
            if (c == '.') ans += "[.]";
            else ans += c;
        }
        return ans;
    }
};