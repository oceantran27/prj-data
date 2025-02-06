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
    int numberOfSteps (int num) 
    {
        return num == 0 ? 0 : 1 + numberOfSteps(num & 1 ? num - 1 : num >> 1);
    }
};