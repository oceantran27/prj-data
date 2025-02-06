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
    vector<string> uncommonFromSentences(string A, string B) {
        stringstream ss(A + ' ' + B);
        string s;
        unordered_map<string, int> table;
        while (getline(ss, s, ' ')) {
            ++table[s];
        }
        vector<string> result;
        for (auto& p : table) {
            if (p.second == 1) {
                result.push_back(p.first);
            }
        }
        return result;
    }
};
