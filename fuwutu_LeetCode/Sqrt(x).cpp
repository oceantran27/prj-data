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
    int sqrt(int x)
    {
        int square = 0;
        int n = 0;
        while (x - n - n - 1 >= square)
        {
            square += n + n + 1;
            ++n;
        }
        return n;
    }
};
