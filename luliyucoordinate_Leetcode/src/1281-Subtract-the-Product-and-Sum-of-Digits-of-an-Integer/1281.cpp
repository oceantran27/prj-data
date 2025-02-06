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
    int subtractProductAndSum(int n) 
    {
        int sum = 0, product = 1;
        while (n)
        {
            sum += n % 10;
            product *= n % 10;
            n /= 10;
        }
        return product - sum;
    }
};