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
    double angleClock(int hour, int minutes) {
        
        double an, h=hour, m=minutes;
        
        an = ((30*h) + (m/2)) - (6*m);
       
        an = an < 0 ? -1*an : an;
        an = an < 360-an ? an : 360-an;
        
        return an;
    }
};
