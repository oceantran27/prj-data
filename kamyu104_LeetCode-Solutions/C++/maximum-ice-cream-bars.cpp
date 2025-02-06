#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(1)

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(begin(costs), end(costs));
        for (int i = 0; i < size(costs); ++i) {
            coins -= costs[i];
            if (coins < 0) {
                return i;
            }
        }
        return size(costs);
    }
};
