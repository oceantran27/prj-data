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
    int largestUniqueNumber(vector<int>& A) {
        unordered_map<int, int> table;
        for (int a : A) {
            ++table[a];
        }
        int maxNum = -1;
        for (auto p : table) {
            if (p.second == 1) {
                maxNum = max(maxNum, p.first);
            }
        }
        return maxNum;
    }
};
