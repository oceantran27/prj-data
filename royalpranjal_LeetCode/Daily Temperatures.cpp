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
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size(), i = 0;
        
        vector<int> ans(n, 0);
        stack<int> st;
        
        while(i < n){
            while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                ans[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
            i++;
        }
                
        return ans;
    }
};
