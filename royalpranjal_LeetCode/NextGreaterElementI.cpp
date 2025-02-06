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
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        int n1 = findNums.size(), n2 = nums.size(), i = 0;
        
        vector<int> sol(n1);
        
        map<int, int> m;
        
        stack<int> st;
        
        while(i < n2){
            if(!st.empty()){
                while(!st.empty() && (nums[i] > st.top())){
                    m[st.top()] = nums[i];
                    st.pop();
                }
            }
            
            st.push(nums[i]);
            
            i++;
        }
        
        while(!st.empty()){
            m[st.top()] = -1;
            st.pop();
        }
        
        for(int i = 0; i < n1; i++){
            sol[i] = m[findNums[i]];
        }
        
        return sol;
    }
};
