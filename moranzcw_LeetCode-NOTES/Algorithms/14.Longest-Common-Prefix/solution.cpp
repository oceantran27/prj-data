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
    string longestCommonPrefix(vector<string> &strs) 
    {
        if( strs.size() == 0)
            return "";
        string prefix = strs[0];
        for(int i = 0;i<strs.size();i++)
        {
            if(prefix.size() == 0 || strs[i].size() == 0)
                return "";
            int j = 0;
            while(prefix[j] == strs[i][j])
            {
                j++;
            }
            prefix = prefix.substr(0,j);
        }
        return prefix;
    }
};