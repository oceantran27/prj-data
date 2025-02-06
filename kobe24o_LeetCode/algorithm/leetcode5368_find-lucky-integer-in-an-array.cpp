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
    int findLucky(vector<int>& arr) {
    	map<int,int> m;
    	for(int a : arr)
    		m[a]++;
    	int ans = -1;
    	for(auto& mi : m)
    		if(mi.first == mi.second)
    			ans = mi.first;
		return ans;
    }
};