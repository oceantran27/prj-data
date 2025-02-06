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
    int minKBitFlips(vector<int>& A, int K) {
        int result = 0, curr = 0;
        for (int i = 0; i < A.size(); ++i) {
            if (i >= K) {
                curr -= A[i - K] / 2;
            }
            if (curr & 1 ^ A[i] == 0) {
                if (i + K > A.size()) {
                    return -1;
                }
                A[i] += 2;
                ++curr;
                ++result;
            }
        }
        return result;
    }
};
