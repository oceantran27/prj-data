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
    string makeGood(string s) {
     stack<char>st;
     for(int i=0;i<s.size();i++)
     {
         if(st.empty())
          {
             st.push(s[i]);
             continue;
          }
          if(abs(st.top()-s[i]) == 32)
          {
              st.pop();
          }
         else
         {
             st.push(s[i]);
         }
         }
        string ans;
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
     }
};