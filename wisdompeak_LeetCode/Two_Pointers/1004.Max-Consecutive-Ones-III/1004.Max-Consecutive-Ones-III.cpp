#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& A, int K) 
    {
        int n = A.size();
        int count = 0;
        int i = 0;
        int ret = 0;
        for (int j=0; j<n; j++)
        {
            if (A[j]==1)
            {
                ret = max(ret, j-i+1);
                continue;
            }
                
            count++;
            while (count>K)
            {
                if (A[i]==0)
                    count--;
                i++;
            }
            ret = max(ret, j-i+1);
        }
        return ret;
    }
};
