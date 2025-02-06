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
    bool isReachable(int targetX, int targetY) 
    {
        int g = gcd((LL)targetX, (LL)targetY);
        while (g%2==0) g/=2;
        return g==1;
    }       
};
