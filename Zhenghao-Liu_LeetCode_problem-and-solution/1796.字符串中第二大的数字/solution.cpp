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
    int secondHighest(string s) {
        map<char,int> mp;
        for (char i:s) {
            if (i>='0' && i<='9') {
                mp[i-'0']++;
            }
        }
        if (mp.size()<2) {
            return -1;
        }
        auto ans=mp.end();
        ans--;
        ans--;
        return ans->first;
    }
};