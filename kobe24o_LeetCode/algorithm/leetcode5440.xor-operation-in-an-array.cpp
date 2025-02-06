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
    int xorOperation(int n, int start) {
    	int i, XOR = 0;
    	for(i = 0; i < n; i++)
    	{
    		XOR ^= (star+2*i);
    	}
    	return XOR;
    }
};