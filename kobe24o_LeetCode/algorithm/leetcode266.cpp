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
    bool canPermutePalindrome(string s) {
    	vector<int> c(128,0);
    	for(char ch : s)
    		c[ch]++;
    	int odd = 0;
    	for(int i = 0; i < 128; ++i)
    		if(c[i]&1)
    			odd++;
		return odd <= 1;
    }
};