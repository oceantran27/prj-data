#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canBeValid(string s, string locked) 
    {
        if (s.size() % 2 != 0) return false;
        int upper = 0, lower = 0;
        for (int i=0; i<s.size(); i++)
        {
            if (locked[i]=='1')
            {
                if (s[i]=='(')
                {
                    upper += 1;
                    lower += 1;
                }                    
                else
                {
                    upper -= 1;
                    lower -= 1;
                }
            }
            else
            {
                upper += 1;
                lower -= 1;
            }            

            if (lower < 0)
                lower += 2;

            if (upper < 0) return false;            
        }        
        
        return lower == 0;        
    }
};
