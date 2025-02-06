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
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> set;
        for (int i = 0; i < A.size(); ++i)
        {
        	if(set.find(A[i]) == set.end())
        		set.insert(A[i]);
        	else
        		return A[i];
        }
        return -1;
    }
};