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
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> ans;
        stack<int> st;
        for(int i=0; i<a.size(); i++)
        {
            bool d = false;
            while(!st.empty() && st.top()>0 && a[i]<0)
            {
                int x = st.top();
                st.pop();
                if(abs(x)>abs(a[i]))
                {
                    st.push(x);
                }
                if(abs(x)>=abs(a[i]))
                {
                    d = true;
                    break;
                }
            }
            if(!d)
            st.push(a[i]);
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};