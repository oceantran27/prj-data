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
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int count=0;
        for(int z=1;z<timeSeries.size();z++){
            if(timeSeries[z-1]+duration<=timeSeries[z]){
                count+=duration;
            }
            else{
                count+=timeSeries[z]-timeSeries[z-1];
            }
        }
        count+=duration;
        return count;
           
    }
};
