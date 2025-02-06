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
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && st.top()=='(' && s[i]==')'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};