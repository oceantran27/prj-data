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
    vector<string> generatePalindromes(string s) {
        vector<int> table(128);
        for (char c : s) {
            ++table[c];
        }

        vector<string> result;
        int odd = 0;
        string mid, seed;
        for (int i = 0; i < table.size(); ++i) {
            if (table[i] % 2) {
                ++odd;
                mid += i;
                if (odd > 1) {
                    return result;
                }
            }
            seed += string(table[i] >> 1, i);
        }
        
        string path;
        vector<bool> used(seed.size());
        dfs(seed, path, mid, used, result);
        return result;
    }

private:
    void dfs(string& seed, string& path, string mid, vector<bool>& used, vector<string>& result) {
        if (path.size() == seed.size()) {
            string rev(path);
            reverse(rev.begin(), rev.end());
            result.push_back(path + mid + rev);
            return;
        }

        for (int i = 0; i < seed.size(); ++i) {
            if (used[i]) {
                continue;
            }
            if (i > 0 && seed[i] == seed[i - 1] && !used[i - 1]) {
                continue;
            }
            used[i] = true;
            path.push_back(seed[i]);
            dfs(seed, path, mid, used, result);
            path.pop_back();
            used[i] = false;
        }
    }
};
