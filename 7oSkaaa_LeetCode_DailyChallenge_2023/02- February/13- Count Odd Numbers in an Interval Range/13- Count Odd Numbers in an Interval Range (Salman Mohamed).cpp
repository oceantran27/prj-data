#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author : Salman Mohamed
class Solution {
public:
    int countOdds(int low, int high) {
        // 2 5  - > 2   3 
        // 3 7 -> 4   3 
        // 4 6 -> 2  1 
        //
        return (high-low )/2 + (high&1||low&1?1:0);
    }
};