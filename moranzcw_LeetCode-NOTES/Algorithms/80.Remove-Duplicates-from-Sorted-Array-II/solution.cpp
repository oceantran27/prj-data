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
        if(n <= 0)
            return 0;
        int firstIndex = 0, secondIndex = 0;
        int curVal = A[0] , curCount = 0;
        for(int i=0;i<n;i++)
        {
            if(A[i] == curVal)
            {
                if(curCount<2)
                {
                    A[firstIndex] = curVal;
                    firstIndex++;
                }
                curCount++;
            }
            else
            {
                curVal = A[i];
                curCount = 1;
                A[firstIndex] = curVal;
                firstIndex++;
            }
        }
        return firstIndex;
    }
};