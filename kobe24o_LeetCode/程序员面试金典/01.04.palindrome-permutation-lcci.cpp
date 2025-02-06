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
    	unordered_map<char,int> m;
    	for(auto& ch : s)
    		m[ch]++;
    	int odd = 0;
    	for(auto& mi : m)
    	{
    		if(mi.second%2 == 1)
    			odd++;
    		if(odd > 1)
    			return false;
    	}
    	return true;
    }
};