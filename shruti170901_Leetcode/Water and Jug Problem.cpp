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
    bool canMeasureWater(int x, int y, int z) {
        if(x+y < z) return 0;
        else if(z==0) return 1;
        else if(x==0){
            return (z==y);
        }else if(y==0) return (z==x);
        int v=gcd(x, y);
        return (z%v==0);
    }
};