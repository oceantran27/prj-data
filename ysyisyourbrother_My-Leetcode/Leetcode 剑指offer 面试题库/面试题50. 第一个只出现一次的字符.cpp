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
    char firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(auto c:s) mp[c]++;
        for(auto c:s){
            if(mp[c]==1) return c;
        }
        return ' ';
    }
};
