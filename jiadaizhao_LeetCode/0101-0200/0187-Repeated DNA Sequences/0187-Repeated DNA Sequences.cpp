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
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> result;
        int n = s.size();
        if (n < 10) {
            return result;
        }
        unordered_map<string, int> table;
        for (int i = 0; i < n - 9; ++i) {
            string str = s.substr(i, 10);
            if (table[str]++ == 1) {
                result.push_back(str);
            }
        }
        
        return result;
    }
};
