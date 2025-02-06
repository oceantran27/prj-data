#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int> &A) { // 模拟法，判断单调性即可
        bool increase = true, decrease = true;
        int n = A.size();
        for (int i = 0; i < n - 1; ++i) {
            if (A[i] > A[i + 1]) {
                increase = false;
            }
            if (A[i] < A[i + 1]) {
                decrease = false;
            }
        }
        return increase || decrease;
    }
};

// 本题不难，把握单调递增和单调递减两种情况就好