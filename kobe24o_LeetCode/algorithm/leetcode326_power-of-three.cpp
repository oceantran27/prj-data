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
    bool isPowerOfThree(int n) {
        if(n < 1)
        	return false;
        while(n%3 == 0)
        	n /= 3;
        return n == 1;
    }
};

class Solution {
public:
    bool isPowerOfThree(int n) {
       return n > 0 && 1162261467 % n == 0;
    }
};