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
    int minSwaps(vector<int>& data) {
        const auto& total_count = accumulate(data.cbegin(), data.cend(), 0);
        int result = 0, count = 0, left = 0;
        for (int i = 0; i < data.size(); ++i) {
            count += data[i];
            if (i - left + 1 > total_count) {
                count -= data[left];
                ++left;
            }
            result = max(result, count);
        }
        return total_count - result;
    }
};
