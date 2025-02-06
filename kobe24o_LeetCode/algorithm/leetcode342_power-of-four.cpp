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
    bool isPowerOfFour(int n) {
        if(n < 1)
        	return false;
        int k = 0b10101010101010101010101010101010;
        if((n&(n-1)) != 0)
        	return false;
        if((n&k) == 0)
        	return true;
        return false;
    }
};