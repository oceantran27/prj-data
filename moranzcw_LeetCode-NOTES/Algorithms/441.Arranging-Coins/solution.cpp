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
    int arrangeCoins(int n) 
    {
        for(long long i=sqrt(2*(long long)n);i>0;i--)
        {
            if((1+i)*i/2 <= n)
                return i;
        }
        return 0;
    }
};