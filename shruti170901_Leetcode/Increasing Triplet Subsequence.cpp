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
    bool increasingTriplet(vector<int>& nums) {
        int a=INT_MAX,b=INT_MAX;
        for(auto i:nums){
            if(i<a){
                a=i;
            }
            else if(i>a && i<b){
                b=i;
            }
            else if(i>b){
                return true;
            }
        }
        return false;
    }
};
