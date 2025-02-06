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
    string thousandSeparator(int n) {
    	string num = to_string(n), ans;
    	int k = 3;
    	for(int i = int(num.size())-1; i >= 0; i--)
    	{
    		if(k == 0)
    		{
    			ans = "." + ans;
    			k = 3;
    			i++;
    		}
    		else
    		{
    			ans = num[i] + ans;
    			k--;
    		}
    	}
    	return ans;
    }
};