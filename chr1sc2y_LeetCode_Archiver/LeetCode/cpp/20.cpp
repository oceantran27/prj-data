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
        stack<char> parentheses;
        for (char c:s) {
            if (!parentheses.empty()) {
                char first = parentheses.top(), second = c;
                if (first == '(') {
                    if (second == ')')
                        parentheses.pop();
                    else if (second == ']' || second == '}')
                        return false;
                    else
                        parentheses.push(second);
                } else if (first == '[') {
                    if (second == ']')
                        parentheses.pop();
                    else if (second == ')' || second == '}')
                        return false;
                    else
                        parentheses.push(second);
                } else if (first == '{') {
                    if (second == '}')
                        parentheses.pop();
                    else if (second == ')' || second == ']')
                        return false;
                    else
                        parentheses.push(second);
                }
            } else
                parentheses.push(c);
        }
        if(!parentheses.empty())
            return false;
        return true;
    }
};