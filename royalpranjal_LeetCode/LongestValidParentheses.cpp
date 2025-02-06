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
    int longestValidParentheses(string s) {
        
        stack<char> temp;
        stack<int> st;
        
        int ans = 0;
        
        st.push(-1);
        
        for(int i = 0; i < s.size(); i++){
            int t = 0;
            if(s[i] == '('){
                st.push(i);
                temp.push('(');
            }
            else{
                if(!temp.empty() && temp.top() == '('){
                    temp.pop();
                    st.pop();
                    t = i - st.top();
                }
                else{
                    st.push(i);
                    temp.push(')');
                }
            }
            
            ans = max(t, ans);
        }
        
        return ans;
    }
};
