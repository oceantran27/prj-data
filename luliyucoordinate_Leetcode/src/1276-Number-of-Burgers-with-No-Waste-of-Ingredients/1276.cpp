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
    vector<int> numOfBurgers(int t, int c) 
    {
        return t % 2 == 0 && c * 2 <= t && t <= c * 4 ? vector<int>({t / 2 - c, c * 2 - t / 2}) : vector<int>();
    }
};