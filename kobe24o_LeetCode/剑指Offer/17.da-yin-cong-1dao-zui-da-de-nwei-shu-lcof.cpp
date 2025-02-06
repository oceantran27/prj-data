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
    vector<int> printNumbers(int n) {
    	int i=1, N = 0, base = 9;
    	while(i <= n)
    	{
    		N += base;
    		base *= 10;
    		i++;
    	}
        vector<int> ans(N);
        for(i = 0; i < N; i++)
        	ans[i] = i+1;
        return ans;
    }
};