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
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
    	int i, count = 0;
    	for(i = 0; i < startTime.size(); ++i)
    		if(queryTime >= startTime[i] && queryTime <= endTime[i])
    			count++;
		return count;
    }
};