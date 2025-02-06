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
    string reverseParentheses(string s) {
        stack<int> St;
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (c == '(') {
                St.push(i);
            }
            else if (c == ')') {
                int left = St.top();
                St.pop();
                reverse(s.begin() + left + 1, s.begin() + i);
            }
        }
        
        string result;
        for (char c : s) {
            if (islower(c)) {
                result += c;
            }
        }
        
        return result;
    }
};
