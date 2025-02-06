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
    int maxScoreSightseeingPair(vector<int> &A) {
        int prev = A[0] + 0, curr = INT_MIN;
        for (int i = 1; i < A.size(); ++i) {
            curr = max(curr, A[i] - i + prev);
            prev = max(prev, A[i] + i);
        }
        return curr;
    }
};
