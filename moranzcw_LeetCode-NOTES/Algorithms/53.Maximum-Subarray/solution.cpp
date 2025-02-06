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
    int maxSubArray(int A[], int n) 
    {
        int ThisSum,MaxSum;
        
        MaxSum = A[0];
        ThisSum = 0;
        for(int j=0;j<n;j++)
        {
            ThisSum += A[j];
            
            if( ThisSum > MaxSum)
                MaxSum = ThisSum;
            if(ThisSum < 0)
                ThisSum = 0;
        }
        return MaxSum;
    }
};