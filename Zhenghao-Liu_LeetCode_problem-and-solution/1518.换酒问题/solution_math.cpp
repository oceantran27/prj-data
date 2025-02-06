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
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while (numBottles>=numExchange)
        {
            int temp=numBottles/numExchange;
            ans+=temp;
            numBottles-=temp*numExchange;
            numBottles+=temp;
        }
        return ans;
    }
};
