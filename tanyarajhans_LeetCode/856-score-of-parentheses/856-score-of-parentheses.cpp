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
        stack<int> s;
        int ans=0,x=0;
        for(int i=0;i<S.size()-1;i++){
            if(S[i]=='('){
                if(S[i+1]==')')
                    ans+=1<<x;
                x++;
            }
            else
                x--;
        }
        return ans;
    }
};