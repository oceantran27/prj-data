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
    string removeDuplicates(string S) {
     	stack<char> stk;
     	for(char c : S)
     		if(!stk.empty() && stk.top() == c)
     			stk.pop();
 			else
 				stk.push(c);   
		string str;
		while(!stk.empty())
		{
			str.push_back(stk.top());
			stk.pop();
		}
		reverse(str.begin(), str.end());
		return str;
    }
};