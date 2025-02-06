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
    string parseTernary(string expression) {
        stack<char> St;
        for (int i = expression.size() - 1; i >= 0; --i) {
            char c = expression[i];
            if (!St.empty() && St.top() == '?') {
                St.pop(); // ?
                char left = St.top();
                St.pop();
                char right = St.top();
                St.pop();
                if (c == 'T') {
                    St.push(left);
                }
                else {
                    St.push(right);
                }
            }
            else if (c != ':') {
                St.push(c);
            }
        }
        
        return string(1, St.top());
    }
};
