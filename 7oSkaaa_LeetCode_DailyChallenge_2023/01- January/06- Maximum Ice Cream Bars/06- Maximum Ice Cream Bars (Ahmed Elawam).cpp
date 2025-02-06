#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//author: Ahmed Elawam
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        // first sort costs of ice creams ascending.
        sort(costs.begin(),costs.end());
        int cnt =0; // counter

        for (auto e : costs){
            // iterate through ice creams, if cost of each is affordable just buy it :)
            // and increase count of bought ice creams by 1, decrease coins by ice cream price 
            if (e<=coins){
                coins-=e;
                cnt++;
            }
        }
        return cnt;

    }
};
