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
    int lengthOfLastWord(const char *s) 
    {
        int result = 0;
        bool flag = false;
        while(*s != '\0')
        {
            if(*s == ' ')
                flag = true;
            else if(flag == true)
            {
                flag = false;
                result = 1;
            }
            else
                result++;
            s++;
        }
        return result;
    }
};