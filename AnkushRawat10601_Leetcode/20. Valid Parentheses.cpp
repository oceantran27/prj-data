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
        stack<char> st;
        for(auto i:s)
        {
            if(i=='(' || i=='{'|| i=='[' )
            {
                st.push(i);
            }
            else
            {
                if(st.empty() || (st.top()=='(' && i!=')') ||(st.top()=='{' && i!='}')||(st.top()=='[' && i!=']'))
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            
        }
        return st.empty();
        
    }
};