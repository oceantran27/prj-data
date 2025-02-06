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
    long long numberOfWeeks(vector<int>& milestones) {
        const int64_t total = accumulate(cbegin(milestones), cend(milestones), 0LL);
        const int64_t max_num = *max_element(cbegin(milestones), cend(milestones));
        const int64_t other_total = total - max_num;
        return other_total + min(other_total + 1, max_num);
    }
};
