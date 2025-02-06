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
    bool canWinNim(int n)
    {
        if ((n % 4) != 0)
            return true;
        else
            return false;
    }
};