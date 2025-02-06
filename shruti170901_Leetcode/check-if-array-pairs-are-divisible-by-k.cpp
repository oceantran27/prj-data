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
// Space: O(k)

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> count;
        for (const auto& i : arr) {
            ++count[(i % k + k) % k];
        }
        if (count.count(0) && count[0] % 2) {
            return false;
        }
        for (int i = 1; i < k; ++i) {
            if (!count.count(i)) {
                continue;
            }
            if (!(count.count(k - i) && count[i] == count[k - i])) {
                return false;
            }
        }
        return true;
    }
};
