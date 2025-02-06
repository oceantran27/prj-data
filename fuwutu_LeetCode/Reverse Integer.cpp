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
    int reverse(int x)
    {
        int n = 0;
        while (x != 0)
        {
            n = n * 10 + x % 10;
            x /= 10;
        }
        return n;
    }
};
