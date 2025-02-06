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
    bool isUgly(int num) {
        if(num < 0)
        	return false;
        int n;
        while(num != 1)
        {
        	n = num;
        	if(num%2 == 0)
        		num /= 2;
        	if(num%3 == 0)
        		num /= 3;
        	if(num%5 == 0)
        		num /= 5;
        	if(n == num)
        		return false;
        }
        return true;
    }
};