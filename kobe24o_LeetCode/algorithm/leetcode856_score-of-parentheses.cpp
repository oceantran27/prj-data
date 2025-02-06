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
    int scoreOfParentheses(string S) {
        int i, deep = 0, ans = 0;
        for(i = 0; i < S.size(); ++i)
        {
        	if(S[i] == '(')
        		deep++;
        	else	//')'
        	{
        		--deep;
        		if(S[i-1] == ')')
        			ans += (1<<deep);
        	}
        }
        return ans;
    }
};