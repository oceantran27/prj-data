#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Name: Laasya Gupta
// Date: 02/10/2022

class Solution
{
public:
    bool isUgly(int n)
    {
        // negative number
        if (n < 1)
            return false;

        vector<int> divisors = {2, 3, 5};

        for (int i : divisors)
        {
            while (n % i == 0)
                n = n / i;
        }

        return n == 1;
    }
};