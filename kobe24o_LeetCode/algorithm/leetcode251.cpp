#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Vector2D {
	vector<vector<int>> arr;
	int r = 0, c = 0, m;
public:
    Vector2D(vector<vector<int>>& v) {
    	arr = v;
        m = arr.size();
    }
    
    int next() {
        while(c == arr[r].size())
    	{
    		r++;
    		c = 0;
    	}
    	return arr[r][c++];
    }
    
    bool hasNext() {
        while(r < m && c == arr[r].size())
    	{
    		r++;
    		c = 0;
    	}
    	return r < m-1 || (r == m-1 && c < arr[m-1].size());
    }
};