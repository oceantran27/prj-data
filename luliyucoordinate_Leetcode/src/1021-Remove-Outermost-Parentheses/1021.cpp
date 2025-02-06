#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class Solution 
{
public:
    string removeOuterParentheses(string S) 
    {
        string res;
        int opened = 0;
        for (char c : S) 
        {
            if (c == '(' and opened++ > 0) res += c;
            if (c == ')' and opened-- > 1) res += c;
        }
        return res;
    }
};