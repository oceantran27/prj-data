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
    int minCount(vector<int>& coins) {
    	int i, sum = 0;
    	for(i = 0; i < coins.size(); ++i)
    		sum += ceil(coins[i]/2.0);
    	return sum;
    }
};