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
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start > destination) {
            swap(start, destination);
        }
        const auto& s_to_d = accumulate(distance.cbegin() + start,
                                        distance.cbegin() + destination, 0);
        const auto& d_to_s = accumulate(distance.cbegin(),
                                        distance.cbegin() + start, 0) +
                             accumulate(distance.cbegin() + destination,
                                        distance.cend(), 0);
        return min(s_to_d, d_to_s);
    }
};
