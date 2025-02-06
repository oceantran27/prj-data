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
    int minKBitFlips(vector<int>& A, int K) {
        int flip = 0, count = 0;
        vector<int> isFlipped(A.size());
        for (int i = 0; i < A.size(); ++i) {
            if (i >= K) {
                flip ^= isFlipped[i - K];
            }
            if ((flip ^ A[i]) == 0) {
                if (i + K > A.size()) {
                    return -1;
                }
                
                flip ^= 1;
                isFlipped[i] = 1;
                ++count;
            }
        }
        return count;
    }
};
