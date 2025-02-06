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
    int longestString(int x, int y, int z) 
    {
        int t = x+y+z-max(0, (max(x,y)-min(x,y)-1));
        return t*2;        
    }
};
