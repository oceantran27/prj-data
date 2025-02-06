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
        int ans=0;
        int max_time=-1;
        for (int i:timeSeries)
        {
            if (i>max_time)
                ans+=duration;
            else
                ans+=i+duration-1-max_time;
            max_time=i+duration-1;
        }
        return ans;
    }
};
