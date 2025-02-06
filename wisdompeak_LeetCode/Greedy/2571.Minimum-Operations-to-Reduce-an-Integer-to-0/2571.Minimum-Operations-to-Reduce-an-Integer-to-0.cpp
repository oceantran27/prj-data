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
    int minOperations(int n) 
    {
        int ret =0 ;
        for (int i=0; i<31; i++)
        {
            if (count(n+(1<<i)) < count(n))
            {
                n += (1<<i);
                ret++;
            }
        }
        return ret + count(n);        
    }

    int count(int x)
    {
        return __builtin_popcount(x);
    }
};
