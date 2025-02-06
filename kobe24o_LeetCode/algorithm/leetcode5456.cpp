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
    int countOdds(int low, int high) {
    	if(low%2 || high%2)
    		return (high-low)/2+1;
    	else
    		return (high-low)/2
    }
};