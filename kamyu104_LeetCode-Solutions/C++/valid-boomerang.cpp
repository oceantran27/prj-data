#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        return (points[0][0] - points[1][0]) * (points[0][1] - points[2][1]) -
               (points[0][0] - points[2][0]) * (points[0][1] - points[1][1]) != 0;
    }
};
