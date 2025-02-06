#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static int x = [](){std::ios::sync_with_stdio(false);cin.tie(0);return 0;}();
class Solution 
{
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        vector<int> res(A.size(), 0);
        int l = 0, r = A.size() - 1;
        for (int i = A.size() - 1; i >= 0; --i)
        {
            if (abs(A[l]) < abs(A[r]))
            {
                res[i] = A[r]*A[r]; --r;
            }
            else 
            {
                res[i] = A[l]*A[l]; ++l;
            }
        }
        return res;
    }
};