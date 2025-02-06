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
    string breakPalindrome(string p) 
    {
        for (int i = 0; i < p.size()/2; i++)
        {
            if (p[i] != 'a') 
            {
                p[i] = 'a';
                return p;
            }
        }
        p[p.size() - 1] = 'b';
        return p.size() > 1 ? p : "";
    }
};