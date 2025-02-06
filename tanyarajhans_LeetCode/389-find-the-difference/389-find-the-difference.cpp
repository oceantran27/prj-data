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
    char findTheDifference(string s, string t) {
        vector<int> v(26);
        for(auto &x: s){
            v[x-'a']++;
        }
        for(auto &x: t){
            v[x-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]<0)
                return (char)('a'+i);
        }
        return '-';
    }
};