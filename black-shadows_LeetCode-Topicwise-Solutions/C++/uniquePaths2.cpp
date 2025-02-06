#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time Complexity: O(mn)
// Space Complexity: O(n)

class Solution {
    public:
        int uniquePaths(int m, int n) {
            vector<int> f(n, 1);
            for(int i = 1; i < m; ++i) {
                for(int j = 1; j < n; ++j) {
                    f[j] += f[j-1];
                }
            }
            return f[n-1];
        }
};
