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
    int findMin(vector<int> &num) 
    {
        if(num.empty())
            return 0;
        else if(num.size() == 1)
            return num[0];
        else
        {
            for(vector<int>::size_type st = 1; st < num.size(); st ++)
            {
                if(num[st-1] > num[st])
                    return num[st];
            }
            return num[0];
        }
    }
};