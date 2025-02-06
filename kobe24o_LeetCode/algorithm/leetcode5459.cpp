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
    int minNumberOperations(vector<int>& target) {
    	int s = 0;
        target.push_back(0);
    	for(int i = 1; i < target.size(); ++i)
    	{
			if(target[i-1] > target[i])
    			s += target[i-1]-target[i];
    	}
    	return s;
    }
};