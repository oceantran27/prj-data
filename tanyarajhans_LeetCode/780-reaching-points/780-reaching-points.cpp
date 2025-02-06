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
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        if(tx<sx || ty<sy)
            return false;
        if(tx==sx)
            return (ty-sy)%sx==0;
        if(ty==sy)
            return (tx-sx)%sy==0;
        if(tx<ty)
            ty%=tx;
        else
            tx%=ty;
        return reachingPoints(sx,sy,tx,ty);
    }
};