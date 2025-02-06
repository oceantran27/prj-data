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
    int shortestDistance(vector<string>& words, string word1, string word2) {
    	int i1 = -1, i2 = -1, mindis = INT_MAX;
    	for(int i = 0; i < words.size(); ++i)
    	{
    		if(words[i] == word1)
    			i1 = i;
    		else if(words[i] == word2)
    			i2 = i;
    		if(i1 != -1 && i2 != -1)
    			mindis = min(mindis, abs(i1-i2));
    	}
    	return mindis;
    }
};