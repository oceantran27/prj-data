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
    vector<int> distributeCandies(int candies, int num_people) {
       int ctr=1,i=0;
        vector<int> vals(num_people,0);
        while(candies>0)
        {
            vals[i++] += (candies<ctr?candies:ctr);
            candies-=ctr;
            ctr++;
            if(i==num_people)
                i=0;
        }
        
        return vals;
    }
};
