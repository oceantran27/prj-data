#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn/logm), n is numBottles, m is numExchange
// Space: O(1)

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result = numBottles;
        while (numBottles >= numExchange) {
            result += numBottles / numExchange;
            numBottles = numBottles / numExchange + numBottles % numExchange;
        }
        return result;
    }
};
