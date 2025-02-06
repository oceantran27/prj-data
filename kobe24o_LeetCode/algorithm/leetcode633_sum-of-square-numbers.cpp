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
    bool judgeSquareSum(int c) {
        long  i = 0, j = pow(c, 0.5)+1, val = 0;
        while(i <= j)
        {
        	val = i*i+j*j;
        	if(val < c)
        		i++;
        	else if(val > c)
        		j--;
        	else
        		return true;
        }
        return false;
    }
};