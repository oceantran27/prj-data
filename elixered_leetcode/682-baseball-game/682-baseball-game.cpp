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
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(auto c:ops)
        {
            if(c=="D")
            {
                auto it = st.top();
                st.pop();
                st.push(it);
                st.push(2*it);
            }
            else if(c=="+")
            {
                auto it1 = st.top();
                st.pop();
                auto it2 = st.top();
                st.pop();
                st.push(it2);
                st.push(it1);
                st.push(it1+it2);
            }
            else if(c=="C")
            {
                st.pop();
            }
            else st.push(stoi(c));
        }
        int ans = 0;
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};