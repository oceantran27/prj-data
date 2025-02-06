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
    int maxNumberOfApples(vector<int>& arr) {
    	sort(arr.begin(), arr.end());
    	int w = 0, n = 0, i = 0;
    	while(i < arr.size() && w < 5000)
    	{
    		w += arr[i++];
    		if(w <= 5000)
    			n++;
    	}
    	return n;
    }
};