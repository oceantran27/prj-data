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

// sort, greedy
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(rbegin(happiness), rend(happiness));
        int64_t result = 0;
        for (int i = 0; i < k; ++i) {
            if (happiness[i] - i <= 0) {
                break;
            }
            result += happiness[i] - i;
        }
        return result;
    }
};
