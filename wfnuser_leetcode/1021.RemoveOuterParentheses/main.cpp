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
    string removeOuterParentheses(string S) {
        string ans = "";
        int stack = 0;
        for (int i = 0; i < S.size(); i++) {
            if (stack >= 2 || stack == 1 && S[i] == '(' ) {
                ans += S[i];
            }
            if (S[i] == '(') {
                stack ++;
            } else {
                stack --;
            }
        }
        return ans;
    }
};
