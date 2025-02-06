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
    int firstUniqChar(string s) {
        vector<int> v(26,0);
        for(auto x:s){
            v[x-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};