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
    string frequencySort(string s) {
        
        map<char,int> mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        
        multimap<int, char, greater <int> > mmp;
        for(auto i : mp)
        {
            mmp.insert(make_pair(i.second, i.first));
        }
        
        string ret;
        for (auto it = mmp.begin(); it != mmp.end(); it++) 
        {
            for(int i=0; i<it->first;i++)
                ret.push_back(it->second);
        }
        
        return ret;
    }
};
