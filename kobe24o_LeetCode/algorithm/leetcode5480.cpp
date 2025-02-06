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
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    	vector<int> indegree(n, 0), ans;
    	for(auto& e : edges) 
    	{
    		indegree[e[1]]++;
    	}
    	for(int i = 0; i < n; i++)
    	{
    		if(indegree[i] == 0)
    			ans.push_back(i);
    	}
    	return ans;
    }
};
