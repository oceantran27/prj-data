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
    int minCost(string colors, vector<int>& neededTime) {
        int sum=0,maxi=0;
        int n=neededTime.size();
        for(int i=0;i<n;)
        {
            char ch=colors[i];
            while(colors[i]==ch)
            {
                sum+=neededTime[i];
                maxi=max(maxi,neededTime[i]);
                i++;
            }
            sum-=maxi;
            maxi=0;
        }
        return sum;
    }
};