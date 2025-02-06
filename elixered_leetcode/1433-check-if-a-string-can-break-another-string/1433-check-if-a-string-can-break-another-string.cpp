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
    
    bool check(string s, string t)
    {
        vector<int> hm(26,0);
        for(auto c:s)
            hm[c-'a']++;
        for(auto c:t)
        {
            int idx = c-'a';
            while(idx>=0 && hm[idx]<=0)
                idx--;
            if(idx<0) return false;
            else hm[idx]--;
        }
        return true;
    }
    
    bool checkIfCanBreak(string s1, string s2) {
        return check(s1,s2) or check(s2,s1);
    }
};