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
    int singleNumber(vector<int> &nums)
    {
        int x = 0;
        for (int a : nums)
            x ^= a;
        return x;
    }
};