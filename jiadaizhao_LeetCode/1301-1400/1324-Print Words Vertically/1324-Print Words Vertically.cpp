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
    vector<string> printVertically(string s) {
        vector<string> words;
        string temp;
        int maxLen = 0;
        for (char c : s) {
            if (c == ' ') {
                words.push_back(temp);
                maxLen = max(maxLen, int(temp.size()));
                temp = "";
            }
            else {
                temp += c;
            }
        }
        words.push_back(temp);
        maxLen = max(maxLen, int(temp.size()));
        vector<string> result;
        for (int i = 0; i < maxLen; ++i) {
            temp = "";
            for (string word : words) {
                if (i < word.size()) {
                    temp += word[i];
                }
                else {
                    temp += ' ';
                }
            }
            while (temp.size() && temp.back() == ' ') {
                temp.pop_back();
            }
            result.push_back(temp);
        }
        
        return result;
    }
};
