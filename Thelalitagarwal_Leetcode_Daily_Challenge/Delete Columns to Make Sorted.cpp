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
    int minDeletionSize(vector<string>& strs) {
        int ans=0;
        if (strs.empty()) return ans;
        for (int j = 0; j < strs[0].size(); j++)
            for (int i = 1; i < strs.size(); i++) {
                if (strs[i - 1][j] > strs[i][j]) {
                    ans++;
                    break;
                }
            }
        return ans;
    }
};