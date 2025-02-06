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
    bool isHappy(int n) 
    {
        while(n>6)
        {
            int sum=0;
            while(n)
            {
                sum+=(n%10)*(n%10);
                n/=10;
            }
            n=sum;
        }
        return n==1;
    }
};