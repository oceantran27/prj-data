#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/contest/weekly-contest-202/problems/magnetic-force-between-two-balls/
// Time: O(log(max(A)) * N + NlogN)
// Space: O(1)
class Solution {
    bool valid(vector<int> &A, int M, int m) {
        int prev = 0;
        for (int i = 1, j = 1; i < m; ++i) {
            while (j < A.size() && A[j] < A[prev] + M) ++j;
            if (j >= A.size()) return false;
            prev = j;
        }
        return true;
    }
public:
    int maxDistance(vector<int>& A, int m) {
        sort(begin(A), end(A));
        if (m == 2) return A.back() - A[0];
        int L = 1, R = A.back() - A[0];
        while (L <= R) {
            int M = (L + R) / 2;
            if (valid(A, M, m)) L = M + 1;
            else R = M - 1;
        }
        return R;
    }
};