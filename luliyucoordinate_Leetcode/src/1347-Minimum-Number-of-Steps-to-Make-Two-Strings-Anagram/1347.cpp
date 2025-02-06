#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int minSteps(string s, string t) 
    {
        int cnt[26] = {};
        int n = s.size(), res = 0;
        
        for (int i = 0; i < n; i++) 
        {
            ++cnt[s[i] - 'a']; 
            --cnt[t[i] - 'a'];   
        }
        
        for (int i = 0; i < 26; i++) 
        {
            if (cnt[i] > 0) res += cnt[i];
        }
        return res;
    }
};