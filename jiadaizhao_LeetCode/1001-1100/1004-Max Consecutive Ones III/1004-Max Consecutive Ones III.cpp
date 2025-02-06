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
    int longestOnes(vector<int>& A, int K) {
        int zero = 0, start = 0;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] == 0) {
                ++zero;
            }

            if (zero > K && A[start++] == 0) {
                --zero;
            }
        }

        return A.size() - start;
    }
};
