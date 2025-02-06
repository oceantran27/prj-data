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
    bool search(int A[], int n, int target)
    {
        for (int i = 0; i < n; ++i)
        {
            if (A[i] == target)
            {
                return true;
            }
        }
        return false;
    }
};
