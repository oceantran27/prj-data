#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
public:
    int minAddToMakeValid(string S) {
        int i, ans=0;
        stack<char> stk;
        for(i=0;i<S.size();i++){
            if(S[i]=='(') stk.push('(');
            else if(!stk.empty()) stk.pop();
            else ans++;
        }
        return ans+stk.size();
    }
};