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
    int minAddToMakeValid(string S) 
    {        
        int count = 0;
        int ret = 0;
        for (auto ch:S)
        {
            if (ch=='(')
                count++;
            else
                count--;
            if (count < 0)
            {
                ret += 1;
                count = 0;
            }
        }
        ret += count;
        return ret;
    }
};
