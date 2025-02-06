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
    long mod = 1e9+7;
    int find(int n)
    {
        if(n<=1)
     {
         return 1;
     }
     if(n==2)
     {
         return 2;
     }
     return (2*find(n-1)%mod + find(n-3)%mod)%mod;
    }
    int numTilings(int n) {
     return find(n);
    }
};
