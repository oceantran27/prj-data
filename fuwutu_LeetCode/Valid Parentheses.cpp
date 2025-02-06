#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> cc;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                cc.push(s[i]);
            }
            else
            {
                if (!cc.empty() && (s[i] == ')' && cc.top() == '(' || s[i] == ']' && cc.top() == '[' || s[i] == '}' && cc.top() == '{'))
                {
                    cc.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        
        return cc.empty();
    }
};
