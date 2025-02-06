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
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int count[256] = {0};
        for(int i=0; i<s.size(); i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int i=0; i<256; i++)
            if(count[i]!=0) return false;
        return true;
    }
};