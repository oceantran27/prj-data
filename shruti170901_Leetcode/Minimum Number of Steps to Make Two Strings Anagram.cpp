#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/

class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> m;
        int i, ans=0;
        for(i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(i=0;i<t.size();i++){
            if(m.find(t[i])==m.end()) ans++;
            else{
                m[t[i]]--;
                if(m[t[i]]==0) m.erase(t[i]);
            }
        }
        return ans;
    }
};