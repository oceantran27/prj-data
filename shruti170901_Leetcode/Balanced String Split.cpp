#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <iostream>
class Solution {
public:
    int balancedStringSplit(string s) 
    {
    int j,y,count=0,flag=0;
    y=s.length();
    for(j=0;j<y;j++)
    {
        if(s[j]=='L')
        {
            count=count-1;
        }
        else if(s[j]=='R')
        {
            count=count+1;
        }
        if(count==0)
        {
            flag++;
        }
    }
    return flag;

    }
};
