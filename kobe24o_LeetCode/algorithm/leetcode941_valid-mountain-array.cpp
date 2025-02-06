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
    bool validMountainArray(vector<int>& A)
    {
        if(A.size() < 3)
        	return false;
        int i = 1;
        while(i <= A.size()-1 && A[i-1] < A[i])
        	i++;
        if(i == 1 || i == A.size())
        	return false;
        while(i <= A.size()-1 && A[i-1] > A[i])
        	i++;
        if(i != A.size())
        	return false;
        return true;
    }
};