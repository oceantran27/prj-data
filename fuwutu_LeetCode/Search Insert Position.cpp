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
    int searchInsert(int A[], int n, int target)
    {
        for (int i = 0; i < n; ++i)
        {
            if (A[i] >= target)
            {
                return i;
            }
        }
        return n;
    }
};

class Solution2
{
public:
    int searchInsert(int A[], int n, int target)
    {
        int left = 0;
        int right = n;
        while (left < right)
        {
            int middle = (left + right) / 2;
            if (A[middle] >= target)
            {
                right = middle;
            }
            else
            {
                left = middle + 1;
            }
        }
        return left;
    }
};
