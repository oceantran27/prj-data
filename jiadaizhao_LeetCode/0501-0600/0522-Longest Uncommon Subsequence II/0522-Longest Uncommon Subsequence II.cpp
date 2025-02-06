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
    int findLUSlength(vector<string>& strs) {
        map<int, vector<string>> table;
        unordered_map<string, int> count;
        for (string str : strs) {
            ++count[str];
            table[str.size()].push_back(str);
        }
        
        unordered_set<string> substring;
        
        for (auto it = table.rbegin(); it != table.rend(); ++it) {
            int n = it->second.size();
            for (int i = 0; i < n; ++i) {
                string str = it->second[i];
                if (count[str] == 1 && !isSubstring(str, substring)) {
                    return it->first;
                }
                substring.insert(str);
            }
        }
        
        return -1;
    }
    
private:
    bool isSubstring(string& a, string& b) {
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                ++i;
            }
            ++j;
        }
        
        return i == a.size();
    }
    
    bool isSubstring(string& a, unordered_set<string>& prev) {
        for (string str : prev) {
            if (isSubstring(a, str)) {
                return true;
            }
        }
        
        return false;
    }
};

class Solution {
public:
    int findLUSlength(vector<string>& strs) {
        sort(strs.begin(), strs.end(), [](string& s1, string& s2){return s1.size() > s2.size();});
        for (int i = 0; i < strs.size(); ++i) {
            bool find = false;
            for (int j = 0; j < strs.size(); ++j) {
                if (i == j) {
                    continue;
                }
                if (isSubstring(strs[i], strs[j])) {
                    find = true;
                    break;
                } 
            }
            if (!find) {
                return strs[i].size();
            }
        }
        return -1;
    }
    
private:
    bool isSubstring(string& a, string& b) {
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                ++i;
            }
            ++j;
        }
        
        return i == a.size();
    }
};
