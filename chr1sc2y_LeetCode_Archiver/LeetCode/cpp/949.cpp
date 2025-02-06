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
    string largestTimeFromDigits(vector<int> &A) {
        sort(A.begin(), A.end());
        string time;
        do {
            int h = A[0] * 10 + A[1], m = A[2] * 10 + A[3];
            if (h < 24 && m < 60)
                time = to_string(A[0]) + to_string(A[1]) + ":" + to_string(A[2]) + to_string(A[3]);
        } while (next_permutation(A.begin(), A.end()));
        return time;
    }
};