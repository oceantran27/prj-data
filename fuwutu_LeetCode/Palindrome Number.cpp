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
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
         
        int digit[12] = {0};
        int count = 0;
        while (x != 0)
        {
            digit[count++] = x % 10;
            x /= 10;
        }
         
        for (int i = 0; i < count / 2; ++i)
        {
            if (digit[i] != digit[count - 1 - i])
            {
                return false;
            }
        }
         
        return true;
    }
};
