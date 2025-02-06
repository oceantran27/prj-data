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
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for (const auto& x : arr) {
            count = x % 2 ? count + 1 : 0;
            if (count == 3) {
                return true;
            }
        }
        return false;
    }
};
