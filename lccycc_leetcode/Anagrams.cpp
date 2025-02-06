#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/* 
    sort each string as its key
    group strings by their keys
    return the groups of size >=2
*/
class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        map<string, int> s;
        map<int, bool> vis;
        vector<string> res;
        for (int i = 0; i<strs.size(); i++){
            string t = strs[i];
            sort(t.begin(), t.end());
            if (s.find(t) != s.end()){
                int k = s[t];
                if (!vis[k]){
                    res.push_back(strs[k]);
                    vis[k] = true;
                }
                res.push_back(strs[i]);
            }else{
                s[t] = i;
            }
        }
        return res;
    }
};

