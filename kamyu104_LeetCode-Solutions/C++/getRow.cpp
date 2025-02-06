#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
    public:
        vector<int> getRow(int rowIndex) {
            vector<int> ans(rowIndex + 1, 1);

            for(int i = 2; i <= rowIndex; ++i) {
                for(int j = i - 1; j > 0; --j) {
                    ans[j] += ans[j - 1];
                }
            }

            return ans;
        }
};
