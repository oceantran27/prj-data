#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class Solution 
{
public:
    int longestOnes(vector<int>& A, int K) 
    {
        int res = 0, l = 0, zeros = 0;
        for (int r = 0; r < A.size(); ++r) 
        {
            zeros += 1 - A[r];
            if (zeros > K) zeros -= 1 - A[l], ++l;
            res =  r - l + 1;
        }
        return res;
    }
};