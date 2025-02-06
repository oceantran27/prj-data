#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int result = duration * timeSeries.size();
        for (int i = 1; i < timeSeries.size(); ++i){
            result -= max(0, duration - (timeSeries[i] - timeSeries[i - 1]));
        }
        return result;
    }
};
