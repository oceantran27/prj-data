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
    int maxScoreSightseeingPair(vector<int>& A) {
        int maxScore = -A.size(), maxLocal = A[0];
        for (int i = 1; i < A.size(); ++i) {
            maxScore = max(maxScore, A[i] - i + maxLocal);
            maxLocal = max(maxLocal, A[i] + i);
        }

        return maxScore;
    }
};
