#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 438 Find All Anagrams in a String.cpp

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int ss = s.size(), ps = p.size();
        if (ss < ps) return {};
        
        vector<int> hts(26), htp(26);
        for (int i = 0; i < ps; i++) {
            htp[p[i] - 'a']++;
            hts[s[i] - 'a']++;
        }
        
        vector<int> ans;
        for (int i = ps; i < ss; i++) {
            if (hts == htp) {
                ans.push_back(i - ps);
            }
            hts[s[i] - 'a']++;
            hts[s[i - ps] - 'a']--;
        }
        if (hts == htp) {
            ans.push_back(ss - ps);
        }
        return ans;
    }
};