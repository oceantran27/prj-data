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
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> table;
        for (int a : arr) {
            ++table[a];
        }
        int result = -1;
        for (auto& p : table) {
            if (p.first == p.second) {
                result = max(result, p.second);
            }
        }
        return result;
    }
};
