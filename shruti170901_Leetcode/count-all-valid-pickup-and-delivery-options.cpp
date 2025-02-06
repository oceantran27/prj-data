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
    int countOrders(int n) {
        static const int MOD = 1e9 + 7;
        int64_t result = 1ll;
        for (int i = 2 * n; i > 0; i -= 2) {
            result = result * i * (i - 1) / 2 % MOD;
        }
        return result;
    }
};
