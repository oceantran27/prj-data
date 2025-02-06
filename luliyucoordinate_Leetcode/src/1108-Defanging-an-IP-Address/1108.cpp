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
    string defangIPaddr(string address) 
    {
        return regex_replace(address, regex("[.]"), "[.]");
    }
};