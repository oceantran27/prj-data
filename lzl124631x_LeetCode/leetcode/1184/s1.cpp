#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/distance-between-bus-stops/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start == destination) return 0;
        if (start > destination) swap(start, destination);
        int sum = 0, path = 0, N = distance.size();
        for (int i = 0; i < N; ++i) {
            if (i >= start & i < destination) path += distance[i];
            sum += distance[i];
        }
        return min(path, sum - path);
    }
};