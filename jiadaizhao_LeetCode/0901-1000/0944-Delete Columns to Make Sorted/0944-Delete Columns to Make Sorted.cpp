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
    int minDeletionSize(vector<string>& A) {
        int count = 0;
        for (int j = 0; j < A[0].size(); ++j) {
            for (int i = 0; i < A.size() - 1; ++i) {
                if (A[i][j] > A[i + 1][j]) {
                    ++count;
                    break;
                }
            }
        }
        return count;
    }
};
