#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/leftmost-column-with-at-least-a-one/
// Author: github.com/lzl124631x
// Time: O(M * logN)
// Space: O(1)
class Solution {
    int search(BinaryMatrix &A, int i, int end) {
        int L = 0, R = end - 1;
        while (L <= R) {
            int M = (L + R) / 2, val = A.get(i, M);
            if (val == 0) L = M + 1;
            else if (val == 1) {
                if (M - 1 < 0 || A.get(i, M - 1) == 0) return M;
                R = M - 1;
            }
        }
        return -1;
    }
public:
    int leftMostColumnWithOne(BinaryMatrix &A) {
        auto dim = A.dimensions();
        int M = dim[0], N = dim[1], ans = N;
        for (int i = 0; i < M; ++i) {
            int j = search(A, i, ans);
            if (j != -1) ans = j;
        }
        return ans == N ? -1 : ans;
    }
};