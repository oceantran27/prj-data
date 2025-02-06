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
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0) {
            return 0;
        }

        int count = 0;
        
        for (int i = 1; i < n; ++i) {
            if (timeSeries[i] < timeSeries[i - 1] + duration) {
                count += timeSeries[i] - timeSeries[i - 1];
            }
            else {
                count += duration;
            }
        }
        
        count += duration;
        
        return count;
    }
};
