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
    int lastRemaining(int n) {
    	if(n == 1)
    		return 1;
    	return 2*lastRemaining(n/2) + 2*(n/2)+2;
    }
};