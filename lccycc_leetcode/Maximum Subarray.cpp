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
    int maxSubArray(int A[], int n) {
        if (n == 0) return 0;
        int res = A[0];
        int sum = 0;
        for (int i = 0; i<n; i++){
            sum += A[i];
            res = max(res, sum);
            if (sum < 0) sum = 0;
        }
        return res;
    }
};

