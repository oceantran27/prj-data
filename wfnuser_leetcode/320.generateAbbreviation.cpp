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
    vector<string> ans;

    void dfs(string word, int index, int cnt, string path) {
        if (index == word.size()) {
            if (cnt != 0) {
                path = path + to_string(cnt);
            }
            ans.push_back(path);
            return;
        }
        // to number
        dfs(word, index+1, cnt+1, path);
        // retain as char
        if (cnt != 0) {
            path = path + to_string(cnt);
        }
        dfs(word, index+1, 0, path+word[index]);
    }

    vector<string> generateAbbreviations(string word) {
        dfs(word, 0, 0, "");
        return ans;
    }
};