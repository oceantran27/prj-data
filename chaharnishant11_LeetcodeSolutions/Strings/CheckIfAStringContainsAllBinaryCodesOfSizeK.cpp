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
    
    bool hasAllCodes(string s, int k) {
        if(k>s.size()) return false;
        unordered_map<string,int> m;
        for(int i=0;i<s.size()-k+1;i++){
            string x=s.substr(i,k);
            m[x]++;
        }
        if(m.size()==pow(2,k)) return true;
        return false;
    }
};