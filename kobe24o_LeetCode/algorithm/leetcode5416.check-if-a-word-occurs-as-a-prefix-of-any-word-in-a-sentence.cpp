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
    int isPrefixOfWord(string sentence, string searchWord) {
    	istringstream in(sentence);
    	string s;
    	int idx = 1;
    	while(in >> s)
    	{
    		if(s.find(searchWord) == 0)
    			return idx;
    		idx++;
    	}
    	return -1;
    }
};