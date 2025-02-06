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
        vector<int> dict(128, 0);
        
        for(auto c: s){
            dict[c]++;
        }
        
        for(int i=0;i<s.size();++i){
            if(dict[s[i]] == 1){
                return i;
            }
        }
        
        return -1;
    }
};
