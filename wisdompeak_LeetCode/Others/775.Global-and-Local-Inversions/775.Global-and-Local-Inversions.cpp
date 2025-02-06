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
    bool isIdealPermutation(vector<int>& A) 
    {
        int curMax = -1;
        for (int i=1; i<A.size(); i++)
        {
            if (i>=2)
                curMax = max(curMax, A[i-2]);
            if (curMax > A[i])
                    return false;
            
        }
        return true;        
    }
};
