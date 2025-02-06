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
    int removeElement(int A[], int n, int elem)
    {
        int new_length = 0;
        for (int i = 0; i < n; ++i)
        {
            if (A[i] != elem)
            {
                A[new_length++] = A[i];
            }
        }
         
        return new_length;
    }
};
