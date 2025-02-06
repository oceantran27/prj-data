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
    vector<vector<int> > subsets(vector<int> &S) {
        std::sort(S.begin(), S.end());
    	int len = S.size();
    	vector<vector<int> > result;
    	vector<int> tmp;

    	for(int i = 0; i < 1 << len; i++) {
    		for(int j = 0; j < len; j ++) {
    			if(i & 1 << j) {
    				tmp.push_back(S[j]);
    			}
    		}
    		result.push_back(tmp);
    		tmp.clear();
    	}

    	return result;
    }
};

