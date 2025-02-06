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
    int minDistance(int height, int width, vector<int>& tree, vector<int>& squirrel, vector<vector<int>>& nuts) {
        int sum = 0;
        int maxDiff = INT_MIN;
        for (auto nut : nuts) {
            int nutTreeDist = abs(tree[0] - nut[0]) + abs(tree[1] - nut[1]);
            sum += nutTreeDist * 2;
            int nutSquirrelDist = abs(squirrel[0] - nut[0]) + abs(squirrel[1] - nut[1]);
            maxDiff = max(maxDiff, nutTreeDist - nutSquirrelDist);
        }
        
        return sum - maxDiff;
    }
};
