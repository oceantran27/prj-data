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
    int countElements(vector<int>& arr) {
    	unordered_set<int> s(arr.begin(), arr.end());
    	int count = 0;
    	for(int a : arr)
    		if(s.find(a+1) != s.end())
    			count++;
		return count;
    }
};