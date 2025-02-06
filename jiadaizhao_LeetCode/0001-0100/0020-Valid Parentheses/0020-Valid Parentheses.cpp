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
        stack<char> St;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                St.push(c);
            }
            else {
                if (St.empty()) {
                    return false;
                }
                
                if ((c == ')' && St.top() != '(') ||
                    (c == '}' && St.top() != '{') ||
                    (c == ']' && St.top() != '[')) {
                    return false;
                }
                
                St.pop();
            }
        }
        
        return St.empty();
    }
};
