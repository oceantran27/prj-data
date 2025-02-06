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
        for(int i=0;i<s.length();++i){
          char c = s[i];
          if(c=='(' || c=='[' || c=='{')
            stk.push(c);
          else if(c==')'){
            if(stk.empty() || stk.top()!='(')
              return false;
            stk.pop();
          }
          else if(c==']'){
            if(stk.empty() || stk.top()!='[')
              return false;
            stk.pop();
          }
          else{
            if(stk.empty() || stk.top()!='{')
              return false;
            stk.pop();
          }
        }
        return stk.empty();
    }
};