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
    int numberOfDays(int Y, int M) {
    	vector<int> d = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    	if(M != 2)
    		return d[M];
    	if((Y%400 == 0) || (Y%4==0 && Y%100!=0))
    		return d[2]+1;
    	return d[2];
    }
};