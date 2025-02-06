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
    int numberOfDays(int Y, int M) 
    {
        int D[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if (Y % 400 == 0 or Y % 4 == 0 and Y % 100 != 0) D[1]++;
        return D[M - 1];
    }
};