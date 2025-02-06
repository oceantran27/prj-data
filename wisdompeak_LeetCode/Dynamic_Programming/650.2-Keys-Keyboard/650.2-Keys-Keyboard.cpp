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
    int minSteps(int n) 
    {
        int s=0;
        for (int i=2; i<=n; i++)
        {
            while (n%i==0)
            {
                s+=i;
                n/=i;
            }
        }
        return s;
    }
};
