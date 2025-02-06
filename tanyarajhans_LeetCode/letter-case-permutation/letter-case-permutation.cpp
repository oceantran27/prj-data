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
    void backtrack(string S, vector<string> &ans, int p){
        ans.push_back(S);
        if(p>=S.size())
        {  
            return;
        }
        
        for (int i=p;i<S.size();i++)
        {
            if (isalpha(S[i]))
            {
                S[i] ^= 32;
                backtrack(S,ans,i+1);
                S[i] ^= 32;
            }
        }
        
    }
    vector<string> letterCasePermutation(string S) {
       vector<string> ans;
       backtrack(S,ans,0);
       return ans;
    }
};
