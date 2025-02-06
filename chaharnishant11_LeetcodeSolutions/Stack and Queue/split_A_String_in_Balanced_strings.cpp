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
    int balancedStringSplit(string s) {
        stack<char> st;
        int ans=0;
        for(int i=0;s[i]!='\0';i++){
            if(st.empty()){
                st.push(s[i]);

            }else if(st.top()==s[i]){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }if(st.empty()) ans++;
        }
        return ans;
    }
};
