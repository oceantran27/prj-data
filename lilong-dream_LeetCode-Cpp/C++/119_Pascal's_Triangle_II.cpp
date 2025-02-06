#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://oj.leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 1);
        
        if(rowIndex < 2) {
            return res;
        }
        
        for(int i = 1; i < rowIndex; ++i) {
            for(int j = i; j > 0; --j) {
                res[j] += res[j - 1];
            }
        }
        
        return res;
    }
};

