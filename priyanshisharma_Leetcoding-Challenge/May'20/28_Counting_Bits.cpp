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
    vector<int> countBits(int num) {
        
        int ctr = 0,n;
        vector<int> ret;
        for(int i=0;i<=num;i++)
        {
            ctr = 0;
            n = i;
            while(n>0)
            {
                ctr += n%2;
                n/=2;
            }
            ret.push_back(ctr);
        }
        return ret;
        
        
    }
};
