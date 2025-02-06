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
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i = 0, j = 1;
        while(i < A.size()-1 && j < A.size())
        {
        	while(i < A.size()-1 && A[i]%2 == 0)
        		i += 2;
        	while(j < A.size() && A[j]%2 != 0)
        		j += 2;
        	if(i < A.size()-1 && j < A.size())
    		{
    			swap(A[i], A[j]);
    			i += 2, j += 2;
    		}
        }
        return A;
    }
};