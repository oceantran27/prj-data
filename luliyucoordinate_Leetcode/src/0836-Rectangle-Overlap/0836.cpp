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
    bool isRectangleOverlap(vector<int>& r1, vector<int>& r2) {
        return r1[0] < r2[2] && r1[1] < r2[3] && r1[2] > r2[0] && r1[3] > r2[1];
    }
};