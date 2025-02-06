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
    bool isPowerOfThree(int n) {
        // 1162261467 = 3^19 max power of three 
        return n>0 && 1162261467%n == 0;
    }
};
