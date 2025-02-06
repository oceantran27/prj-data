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

// array
class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int result = numeric_limits<int>::min();
        for (int i = 0; i < k; ++i) {
            int curr = 0;
            for (int j = size(energy) - 1 - i; j >= 0; j -= k) {
                curr += energy[j];
                result = max(result, curr);
            }
        }
        return result;
    }
};
