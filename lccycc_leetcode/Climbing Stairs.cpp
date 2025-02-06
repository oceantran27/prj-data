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
    int climbStairs(int n) {
        int f = 1, g = 1;
        for (int i = 2; i<=n; i++){
            int c = f+g;
            f = g; g = c;
        }
        return g;
    }
};


