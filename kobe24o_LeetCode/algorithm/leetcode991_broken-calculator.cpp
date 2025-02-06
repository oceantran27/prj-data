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
    int brokenCalc(int X, int Y) {
        if(X >= Y)
            return X-Y;
        int n = 0;
		while(X < Y)
		{
			if(Y%2 == 1)
			{
				Y = (Y+1)>>1;
				n += 2;
			}
			else
			{
				Y >>= 1;
				n++;
			}
		}
		return X-Y+n;
    }
};