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
    int numberOfArithmeticSlices(vector<int>& A) {
        int res = 0, i = 0;
        for (int i = 0; i + 2 < A.size(); ++i) {
            const auto start = i;
            while (i + 2 < A.size() && A[i + 2] + A[i] == 2 * A[i + 1]) {
                res += (i++) - start + 1;
            }
        }
        return res;
    }
};
