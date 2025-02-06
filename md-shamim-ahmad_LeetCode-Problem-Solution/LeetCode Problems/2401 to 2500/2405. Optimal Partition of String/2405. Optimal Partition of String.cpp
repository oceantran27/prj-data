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
    int partitionString(string s) {
        map<char, int> mp;
        int ans = 1;
        for (char ch: s) {
            if (mp[ch] >= 1) {
                ans++;
                mp.clear();
            }
            mp[ch]++;
        }
        return ans;
    }
};