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
        stack<char> stc;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stc.push(s[i]);
                continue;
            }
            if (stc.empty()) return false;
            else if (s[i] == ')' && stc.top() != '(')
                return false;
            else if (s[i] == '}' && stc.top() != '{')
                return false;
            else if (s[i] == ']' && stc.top() != '[')
                return false;
            stc.pop();
        }
        return stc.empty();
    }
};
