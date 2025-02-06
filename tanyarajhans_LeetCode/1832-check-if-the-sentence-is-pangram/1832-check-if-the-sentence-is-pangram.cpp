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
    bool checkIfPangram(string s) {
        vector<int> v(26,0);
        if(s.size()<26)
            return false;
        for(auto &x: s)
            v[x-'a']++;
        for(int i=0;i<26;i++){
            if(v[i]==0)
                return false;
        }
        return true;
    }
};