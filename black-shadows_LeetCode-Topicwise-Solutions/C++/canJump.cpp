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
        bool canJump(int A[], int n) {
            int reach = 0;
            for(int i = 0; i <= reach && i < n; ++i) {
                reach = max(reach, i + A[i]);
            }
            return reach >= n - 1;
        }
};
