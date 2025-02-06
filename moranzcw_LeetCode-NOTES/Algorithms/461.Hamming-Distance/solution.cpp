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
    int hammingDistance(int x, int y) 
    {
        int distance = 0;
        while(x||y)
        {
            if((x&1)^(y&1)==1) 
                distance += 1;
            x>>=1;
            y>>=1;
        }
        return distance;
    }
};