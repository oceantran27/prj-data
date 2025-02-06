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
    int findMinDifference(vector<string>& timePoints) {
        vector<int> bucket(1440);
        for (string& s : timePoints) {
            int index = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3));
            if (bucket[index]++) {
                return 0;
            }
        }
        
        int first = -1, last = -1;
        int minDiff = INT_MAX;
        for (int i = 0; i < 1440; ++i) {
            if (bucket[i]) {
                if (first == -1) {
                    first = i;
                }
                else {
                    minDiff = min(minDiff, i - last);
                }
                last = i;
            }
        }
        
        return min(minDiff, 1440 - (last - first));
    }
};
