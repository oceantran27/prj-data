#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    bool isPrefixString(string s, vector<string>& words) {
        string t;
        for (int i = 0; i < words.size(); i++) {
            t += words[i];
            if (t == s) return true;
        }
        return false;
    }
};
