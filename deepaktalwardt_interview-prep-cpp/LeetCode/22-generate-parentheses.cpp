#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    void backtrack(vector<string>& validPerms, string curr, int open, int close, int max) {
        if (curr.size() == 2 * max) {
            validPerms.push_back(curr);
            return;
        }
        if (open < max) {
            backtrack(validPerms, curr + '(', open + 1, close, max);
        }
        if (close < open) {
            backtrack(validPerms, curr + ')', open, close + 1, max);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};