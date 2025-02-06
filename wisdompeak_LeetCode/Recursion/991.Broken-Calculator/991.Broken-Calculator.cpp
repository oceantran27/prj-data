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
    int brokenCalc(int X, int Y) 
    {
        if (X>=Y)
            return X-Y;
        else if (Y%2==1)
            return brokenCalc(X,Y+1)+1;
        else
            return brokenCalc(X,Y/2)+1;
    }
};
