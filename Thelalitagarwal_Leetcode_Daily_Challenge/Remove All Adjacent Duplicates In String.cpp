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
    string removeDuplicates(string s) {
        
        string ans;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(ans.size() && ans.back() == s[i])
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        
        return ans;
    }
};