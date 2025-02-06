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
    string convertToTitle(int n) 
    {
        if(n < 1)
            return "";
        else
        {
            string result = "";
            while(n)
            {
                n --;
                char c = n%26 + 'A';
                result += c;
                n /= 26;
            }
            reverse(result.begin(), result.end());
            return result;
        }
    }
};