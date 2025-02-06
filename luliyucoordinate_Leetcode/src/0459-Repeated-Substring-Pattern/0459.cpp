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
    bool repeatedSubstringPattern(string s) 
    {
        return (s + s).substr(1, s.size() * 2 - 2).find(s) != -1;
    }
};