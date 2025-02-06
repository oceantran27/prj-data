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
    int findComplement(int num) 
    {
        int result = ~num;
        int count = 0;
        while(num>0)
        {
            num>>=1;
            count++;
        }
        return result ^ (INT_MAX<<count);
    }
};