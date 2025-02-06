#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author : Omar Wael
// leetcode account : https://leetcode.com/OmarWael1/

class Solution {
public:
    int countOdds(int low, int high) {
        // get number of odd numbers between 1 and high
        high=(high+1)/2;
        // get number of odd numbers between 1 and low-1
        low=low/2;
        return high-low;
    }
};
