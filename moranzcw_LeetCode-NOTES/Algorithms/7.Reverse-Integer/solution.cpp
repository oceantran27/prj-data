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
        int flag = x > 0? 1:-1;
        x = abs(x);

        long int result = 0;
        int digit = 0;
        while(x)
        {
            digit = x % 10;
            result = result * 10 + digit;
            x /= 10;
        }

        result *= flag;

        if(result > 2147483647 || result < -2147483648)
            return 0;

        return (int)result; 
    }
};