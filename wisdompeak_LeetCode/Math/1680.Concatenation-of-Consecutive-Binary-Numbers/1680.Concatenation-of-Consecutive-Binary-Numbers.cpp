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
    int concatenatedBinary(int n) 
    {
        long long M = 1e9+7;
        long long ret = 1;
        for (int i=2; i<=n; i++)
        {
            int len = log(i)/log(2)+1;            
            ret = (ret<<len) % M;
            ret += i;
        }
        return ret % M;
    }
};
