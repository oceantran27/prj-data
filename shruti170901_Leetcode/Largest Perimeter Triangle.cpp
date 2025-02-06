#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int largestPerimeter(vector<int> &A)
    {
        sort(A.begin(), A.end());
        int n = A.size() - 1;
        for (int i = n; i >= 2; i--)
        {
            if (A[i - 1] + A[i - 2] > A[i])
            {
                return A[i] + A[i - 1] + A[i - 2];
            }
        }

        return 0;
    }
};