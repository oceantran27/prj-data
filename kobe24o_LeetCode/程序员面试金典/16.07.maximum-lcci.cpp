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
    int maximum(int a, int b) {
    	long a_b = long(a)-b;
    	int pn = ((a_b)>>63)&1;//符号位，1为负，0为正
    	return b*pn + a*(1^pn);
    }
};