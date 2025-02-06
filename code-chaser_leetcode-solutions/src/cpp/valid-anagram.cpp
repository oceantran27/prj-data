#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp,mpp;
        for(auto i:s)mp[i]++;
        for(auto i:t)mpp[i]++;
        if(mp!=mpp)return false;
        return true;
    }
};
