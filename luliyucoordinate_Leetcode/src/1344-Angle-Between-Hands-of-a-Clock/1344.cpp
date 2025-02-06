#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    double angleClock(int hour, int minutes) 
    {
        double t = abs((hour*30 + minutes/2.0) - minutes*6);
        return min(t, 360 - t);
    }
};