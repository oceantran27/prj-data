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
    bool validMountainArray(vector<int>& A) {
        int i = 0;
        while (i + 1 < A.size() && A[i] < A[i + 1]) {
            ++i;
        }
        int j = A.size() - 1;
        while (j - 1 >= 0 && A[j - 1] > A[j]) {
            --j;
        }
        return 0 < i && i == j && j < A.size() - 1;
    }
};
