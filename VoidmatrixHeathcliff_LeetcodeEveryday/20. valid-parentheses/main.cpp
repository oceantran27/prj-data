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

        for (auto c : s)
        {
            if (c == '[')
            {
                stk.push(']');
            }
            else if (c == '(')
            {
                stk.push(')');
            }
            else if (c == '{')
            {
                stk.push('}');
            }
            else
            {
                if (stk.empty())
                {
                    return false;
                }
                if (c != stk.top())
                {  
                    return false;
                }
                stk.pop();
            } 

            
        }
        return stk.empty();
    }
};