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
    string generateTheString(int n) 
    {
        return string(n - 1, 'a') + (n % 2 ? 'a' : 'b');
    }
};