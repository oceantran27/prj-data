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
    int numTrees(int n) {
        vector<int> num(n + 1, 0);
    	num[0] = 1;
    	num[1] = 1;

    	for(int i = 2; i <= n; i++) {
    		for(int j = 1; j <= i; j++) {
    			num[i] += num[j - 1] * num[i - j];
    		}
		}

    	return num[n];
    }
};

