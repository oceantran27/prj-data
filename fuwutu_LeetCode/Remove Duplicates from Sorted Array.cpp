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
    int removeDuplicates(int A[], int n)
    {
        int new_length = min(n, 1);
        for (int i = 1; i < n; ++i)
        {
            if (A[i] != A[i-1])
            {
                A[new_length++] = A[i];
            }
        }
         
        return new_length;
    }
};
