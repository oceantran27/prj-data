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
    bool checkPerfectNumber(int num) {
        if(num == 0)
            return false;
    	int sum = 0;
        for(int i = 1; i < sqrt(num); ++i) 
        {
        	if(num%i == 0)
        		sum += i, sum += num/i;
        }
        return sum-num == num;
    }
};