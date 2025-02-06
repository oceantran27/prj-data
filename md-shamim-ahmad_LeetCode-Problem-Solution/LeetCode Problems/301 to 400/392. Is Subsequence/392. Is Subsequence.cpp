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
    bool isSubsequence(string s, string t) {
        int pos = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == s[pos]) pos++;
        }
        if (pos == s.size())
            return true;
        return false;
    }
};