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
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> table;
        for (int a : arr) {
            ++table[a];
        }

        unordered_set<int> count;
        for (auto p : table) {
            if (!count.insert(p.second).second) {
                return false;
            }
        }

        return true;
    }
};
