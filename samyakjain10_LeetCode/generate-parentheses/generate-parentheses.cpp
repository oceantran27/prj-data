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
    
    vector<string> ans;
    
    void backtrack(string cur, int open, int close, int max){
        
        if(cur.length() == max*2){
            ans.push_back(cur);
            return;
        }
        
        if(open < max){
            backtrack(cur + "(", open+1, close, max);
        }
        
        if(close < open){
            backtrack(cur+ ")", open, close+1, max);
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        
        backtrack("",0,0,n);
        return ans;
        
    }
    
    
};