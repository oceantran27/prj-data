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
    bool canConstruct(string s, int k) {
        bitset<26> odds;
        for (char& c : s) odds.flip(c - 'a');
        return odds.count() <= k && k <= s.length();
    }
};