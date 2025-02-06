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
    vector<vector<int>> permute(vector<int>& num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        vector<vector<int>> result;
        dfs(num, 0, result);
        return move(result);
    }
    
    void dfs(vector<int>& num, int step, vector<vector<int>>& result) {
        if (step == num.size()) {
            result.push_back(num);
            return;
        }
        for (int i = step; i < num.size(); i++) {
            swap(num[step], num[i]);
            dfs(num, step + 1, result);
            swap(num[i], num[step]);
        }
    }
};