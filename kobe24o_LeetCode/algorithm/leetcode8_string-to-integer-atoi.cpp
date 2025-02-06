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
    int myAtoi(string str) {
    	int d=0;
        istringstream is(str);
        is >> d;
        return d;
    }
};