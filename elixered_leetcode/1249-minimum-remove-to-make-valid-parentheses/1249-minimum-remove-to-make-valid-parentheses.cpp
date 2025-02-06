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
    string minRemoveToMakeValid(string s) {
        string ans;
        stack<int> st;
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            char ch = s[i];
            if(ch=='(')
            {
                s[i] = '*';
                st.push(i);
            }
            else if(ch==')')
            {
                if(st.empty())
                    s[i] = '*';
                else 
                {
                    auto j = st.top();
                    st.pop();
                    s[j] = '(';
                }
            }
        }
        for(auto c:s)
            if(c!='*')
                ans += c;
        return ans;
    }
};