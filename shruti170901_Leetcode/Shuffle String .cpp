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
    string restoreString(string s, vector<int>& indices) {
        int n=s.length();
        string ans;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            v[i]={indices[i],i};
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            ans+=s[v[i].second];
        }
        return ans;
    }
};
