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
    string makeFancyString(string s)
    {
        string result;
        for (char c : s)
        {
            int n = result.size();
            if (n < 2 || !(result[n - 1] == c && result[n - 2] == c))
            {
                result += c;
            }
        }
        return result;
    }
};