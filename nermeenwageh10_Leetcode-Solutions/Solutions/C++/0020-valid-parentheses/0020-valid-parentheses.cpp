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
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> fliped;
        fliped[']'] = '[';
        fliped['}'] = '{';
        fliped[')'] = '(';
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ']' || s[i] == ')' || s[i] == '}')
            {
                if (stk.empty() || stk.top() != fliped[s[i]]) return 0;
                stk.pop();
            }else 
                stk.push(s[i]);
        }
        return stk.empty();
    }
};