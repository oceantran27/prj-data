#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://oj.leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(int A[], int n) {
        if(n == 0) {
            return 0;
        }
        
        int max = INT_MIN;
        int sum = 0;
        
        for(int i = 0; i < n; ++i) {
            sum += A[i];
            if(sum > max) {
                max = sum;
            }
            if(sum < 0) {
                sum = 0;
            }
        }
        
        return max;
    }
};

