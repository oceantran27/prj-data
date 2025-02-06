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
        stack<string> stk;
        string temp;
        for(int i = 0; i < s.size(); ++i)
        {
        	if(s[i] != '(' && s[i] != ')')
        		temp.push_back(s[i]);
        	else if(s[i] == '(')
        	{
        		stk.push(temp);
        		temp = "";
        	}
        	else if(s[i] == ')')
        	{
        		reverse(temp.begin(), temp.end());
        		temp = stk.top()+temp;
        		stk.pop();
        	}
        }
        return temp;
    }
};