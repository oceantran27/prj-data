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
    int heightChecker(vector<int>& heights) {
        vector<int> sh(heights.begin(), heights.end());
        sort(sh.begin(), sh.end());
        int sum = 0;
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != sh[i]) {
                ++sum;
            }
        }
        
        return sum;
    }
};
