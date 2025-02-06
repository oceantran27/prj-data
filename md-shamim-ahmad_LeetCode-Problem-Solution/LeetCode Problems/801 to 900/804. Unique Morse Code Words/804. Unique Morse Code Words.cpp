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
    int uniqueMorseRepresentations(vector<string> &words) {
        vector<string> key{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        map<string, int> mp;
        for (int i = 0; i < words.size(); i++) {
            string s = words[i], generate_str = "";
            for (int j = 0; j < s.size(); j++) {
                generate_str += key[s[j] - 'a'];
            }
            mp[generate_str]++;
        }
        return mp.size();
    }
};
