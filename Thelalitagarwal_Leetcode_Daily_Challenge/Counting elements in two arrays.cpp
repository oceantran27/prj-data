#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution{
  public:
  
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
        vector<int> ans(m);
    	sort(arr2, arr2+n);
    	for(int i = 0; i < m; i++){
    	  ans[i] = upper_bound(arr2, arr2+n, arr1[i]) - arr2;  
    	} 
    	return ans;  
    }
};