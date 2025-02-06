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
    int minSwap(vector<int>& A, vector<int>& B) {
        if(A.size() < 2)
        	return 0;
        int mincount = INT_MAX, curcount = 0, i;
        bool b1, b2;
        for(i = 1; i < A.size(); ++i)
        {
        	b1 = ((A[i-1] < A[i])&&(B[i-1] < B[i]));
        	b2 = ((A[i-1] < B[i])&&(B[i-1] < A[i]));
        	if(!b1 && b2)
        	{
        		curcount++;
        		swap(A[i], B[i]);
        	}

        }
        return curcount;
    }
};