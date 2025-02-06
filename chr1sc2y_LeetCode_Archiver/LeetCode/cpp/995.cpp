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
    int minKBitFlips(vector<int> &A, int K) {
        int k = 0, n = A.size();
        if (n == 0)
            return 0;
        for (int i = 0; i < n; ++i) {
            if (A[i] == 1)
                continue;
            if (i + K - 1 >= n)
                return -1;
            ++k;
            for (int j = i; j < i + K; ++j)
                A[j] = A[j] ^ 1;
        }
        return k;
    }
};