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
    string reverseWords(string s) {
        string res = "", word = "";
        s += ' ';
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                reverse(word.begin(), word.end());
                res += word;
                if (i != s.size() - 1) res += ' ';
                word = "";
            } else
                word += s[i];
        }
        return res;
    }
};
