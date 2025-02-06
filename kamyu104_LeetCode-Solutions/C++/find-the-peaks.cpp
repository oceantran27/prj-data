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
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> result;
        for (int i = 1; i + 1 < size(mountain); ++i) {
            if (mountain[i - 1] < mountain[i] && mountain[i] > mountain[i + 1]) {
                result.emplace_back(i);
            }
        }
        return result;
    }
};
