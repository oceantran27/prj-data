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
    int longestValidParentheses(string s) 
    {
        stack<int>Stack;
        int ret = 0;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]=='(')            
                Stack.push(i);                            
            else
            {
                if (!Stack.empty() && s[Stack.top()] == '(')
                {
                    Stack.pop();                    
                    ret = max(ret, i - (Stack.empty()?-1 : Stack.top()));
                }
                else
                    Stack.push(i);
            }
        }
        return ret;
    }
};
