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
        
        stack<int> s;
        vector<int> ans(temperatures.size(),0);
        
        for(int i=0; i<temperatures.size(); i++){
            
            while(!s.empty() && temperatures[i] > temperatures[s.top()]){
                int idx = s.top();
                s.pop();
                ans[idx] = i-idx;
            }
            s.push(i);
        }
        return ans;
    }
};