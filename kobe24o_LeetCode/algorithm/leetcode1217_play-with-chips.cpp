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
    int minCostToMoveChips(vector<int>& chips) {
        int a = 0, b = 0;
        for(int &chip : chips)
        	if(chip%2)
        		a++;
        	else
        		b++;
		return min(a,b);
    }
};