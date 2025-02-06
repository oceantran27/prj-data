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
    int maxWidthRamp(vector<int> &A) {
        int size = A.size();
        for (int i = size - 1; i >= 1; --i) {
            for (int j = 0; j + i < size; ++j) {
                if (A[j + i] >= A[j])
                    return i;
            }
        }
        return 0;
    }
};