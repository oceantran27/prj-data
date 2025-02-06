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
    void AbbrRec(string &abbr, int start, vector<string> &res){
        res.push_back(abbr);
        if(abbr.length() == start) return;
        string origin = abbr;
        for(int i = start; i < abbr.length(); ++i){
            for(int j = 1; i + j <= abbr.length(); ++j){
                abbr.replace(i, j, to_string(j));
                AbbrRec(abbr, i + to_string(j).length() + 1, res);
                abbr = origin;
            }
        }
    }
    vector<string> generateAbbreviations(string word) {
        vector<string> res;
        AbbrRec(word, 0, res);
        return res;
    }
};
