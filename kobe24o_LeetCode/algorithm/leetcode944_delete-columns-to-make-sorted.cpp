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
    int minDeletionSize(vector<string>& A) {
        if(A.empty())
        	return 0;
        int i, j, ans = 0;
        for(i = 0; i < A[0].size(); ++i)
        {
        	for(j = 1; j < A.size(); ++j)
        	{
        		if(A[j-1][i] > A[j][i])
        		{
        			++ans;
        			break;
        		}
        	}
        }
        return ans;
    }
};