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

class Solution {
public:
    int maxWidthRamp(vector<int>& A) {
        int result = 0;
        vector<int> s;
        for (int i = 0; i < A.size(); ++i) {
            if (s.empty() || A[s.back()] > A[i]) {
                s.emplace_back(i);
            }
        }
        for (int i = A.size() - 1; i > result; --i) {
            while (!s.empty() && A[s.back()] <= A[i]) {
                result = max(result, i - s.back()), s.pop_back();
            }
        }
        return result;
    }
};
