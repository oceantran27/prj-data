#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/powerful-integers/
// Author: github.com/lzl124631x
// Time: O(log_x^bound * log_y^bound)
// Space: O(log_x^bound * log_y^bound)
class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_set<int> s;
        for (int a = 1; a + 1 <= bound; a = x == 1 ? bound : a * x) 
            for (int b = 1; a + b <= bound; b = y == 1 ? bound : b * y) 
                s.insert(a + b);
        return vector<int>(s.begin(), s.end());
    }
};