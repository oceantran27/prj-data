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
    int smallestCommonElement(vector<vector<int>>& mat) {
        vector<int> table(10001);
        for (auto& row : mat) {
            for (int val : row) {
                if (++table[val] == mat.size()) {
                    return val;
                }
            }
        }
        
        return -1;
    }
};
