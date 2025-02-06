#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/bulb-switcher-iv/

class Solution {
public:
    int minFlips(string t) {
        int i, n=t.size(), ans=0;
        if(t[0]=='1') ans++;
        for(i=1;i<n;i++) if(t[i]!=t[i-1]) ans++;
        return ans;
    }
};