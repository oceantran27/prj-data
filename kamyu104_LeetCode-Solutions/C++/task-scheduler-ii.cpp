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
// Space: O(n)

// hash table
class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int, int64_t> lookup;
        int64_t result = 0;
        for (const auto& t : tasks) {
            result = max(lookup[t], result + 1);
            lookup[t] = result + space + 1;
        }
        return result;
    }
};
