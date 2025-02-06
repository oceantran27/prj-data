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
    int countSegments(string s) 
    {
        bool flag = false;
        int count = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != ' ' && flag == false)
            {
                flag = true;
                count ++;
            }
            if(s[i] == ' ')
            {
                flag = false;
            }
        }
        return count;
    }
};