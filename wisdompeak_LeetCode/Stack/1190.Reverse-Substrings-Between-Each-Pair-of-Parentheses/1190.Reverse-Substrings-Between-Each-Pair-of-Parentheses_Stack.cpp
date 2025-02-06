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
    string reverseParentheses(string s) 
    {
        string ret;
        stack<int>Stack;
        for (auto ch: s)
        {
            if (isalpha(ch))
                ret.push_back(ch);
            else if (ch=='(')
                Stack.push(ret.size());
            else
            {
                int i = Stack.top();
                Stack.pop();
                reverse(ret.begin()+i, ret.end());
            }
        }
        return ret;
    }
};
