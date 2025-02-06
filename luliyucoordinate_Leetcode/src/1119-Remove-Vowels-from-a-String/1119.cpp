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
    string removeVowels(string S) 
    {
        return regex_replace(S, regex("a|e|i|o|u"), "");
    }
};