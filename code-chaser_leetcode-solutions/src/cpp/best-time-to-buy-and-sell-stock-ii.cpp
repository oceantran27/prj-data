#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
--||author : Mitternachtsmond||-- 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
class Solution 
{
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0],ans=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>m){
                ans+=(prices[i]-m);
            }
            m=prices[i];
        }
        return ans;
    }
};