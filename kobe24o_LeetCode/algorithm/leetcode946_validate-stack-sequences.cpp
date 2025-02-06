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
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0, j = 0;
        stack<int> stk;
        for( ; i < pushed.size(); ++i)
        {
        	stk.push(pushed[i]);
        	if(stk.top() == popped[j])
        	{
        		stk.pop();
        		j++;
        	}
        }
        return (i == pushed.size() && j == pushed.size());
    }
};