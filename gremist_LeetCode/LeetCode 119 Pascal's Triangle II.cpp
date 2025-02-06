#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 119 Pascal's Triangle II.cpp

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex + 1);
        ans[0] = 1;
        for (int i = 1; i < rowIndex + 1; i++) {
            for (int j = i; j >= 1; j--) {
                ans[j] += ans[j - 1];
            }
        }
        return ans;
    }
};