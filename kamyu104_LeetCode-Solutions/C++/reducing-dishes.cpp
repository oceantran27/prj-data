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
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(begin(satisfaction), end(satisfaction), greater<int>());
        int result = 0;
        for (int i = 0, curr = 0; i < satisfaction.size() && curr + satisfaction[i] > 0; ++i) {
            curr += satisfaction[i];
            result += curr;
        }
        return result;
    }
};
