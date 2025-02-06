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
    string minNumber(vector<int>& nums) {
    	vector<string> number;
    	for(auto& n : nums)
    		number.push_back(to_string(n));
    	sort(number.begin(), number.end(),[](const string& a, const string& b)
    		{return a+b < b+a;});
    	string ans;
    	for(auto& n : number)
    		ans += n;
    	return ans;
    }
};