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
    int preimageSizeFZF(int K) 
    {
        int last = 1;
        while (last < K) last = last * 5 + 1;
        while (last > 1) 
        {
            K %= last;
            if (last - 1 == K) return 0;
            last = (last - 1) / 5;
        }
        return 5;
    }
};