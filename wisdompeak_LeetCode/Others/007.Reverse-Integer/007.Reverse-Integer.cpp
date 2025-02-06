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
    int reverse(int x) 
    {
        if (x==INT_MIN) return 0;
        
        int sign = 1;
        if (x<0) sign = -1;
        
        x = abs(x); 
        
        int ret = 0;
        while (x>0)
        {
            if (ret > INT_MAX/10) return 0;
            if (ret*10 > INT_MAX - x%10 ) return 0;
            
            ret = ret*10 + x%10;
            x = x/10;
        }
        
        return ret*sign;
    }
};
