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
    int maxProfit(vector<int>& v) {
        int minm=v[0], profit=0;
        for(int i=1; i<v.size(); i++){
            minm=min(minm,v[i]);
            
            if(profit<v[i]-minm)
                profit=v[i]-minm;
        }

        return profit;
    }
};