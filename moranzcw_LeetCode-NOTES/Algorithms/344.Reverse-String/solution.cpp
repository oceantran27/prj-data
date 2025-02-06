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
    string reverseString(string s) 
    {
        string result(s);
        for(int i=0;i<s.size();i++)
        {
            result[s.size()-1-i] = s[i];
        }
        return result;
    }
};