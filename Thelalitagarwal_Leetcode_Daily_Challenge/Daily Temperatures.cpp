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
        int n = temperatures.size();
        vector<int>nge(n, 0);
        stack<int>st{};
        for(int i = n-1; i>=0; --i){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])
                st.pop();
            if(!st.empty())
                nge[i] = st.top()-i;
            st.push(i);
        }
        return nge;
    }
};