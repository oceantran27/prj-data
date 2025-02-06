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
    int minAddToMakeValid(string S) {
        stack<char> parentheses;
        for (auto c:S) {
            if (c == '(')
                parentheses.push(c);
            else {
                if (!parentheses.empty() and parentheses.top() == '(')
                    parentheses.pop();
                else
                    parentheses.push(c);
            }
        }
        return parentheses.size();
    }
};
