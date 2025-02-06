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
    int numWaterBottles(int n, int k) {
        return (k*((n-1)/(k-1)) + 1 + (n-1)%(k-1));
    }
};
