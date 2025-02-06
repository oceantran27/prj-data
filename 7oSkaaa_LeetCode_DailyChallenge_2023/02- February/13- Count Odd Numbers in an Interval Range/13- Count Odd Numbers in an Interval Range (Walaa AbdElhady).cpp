#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: WalaaAbdElhady

class Solution {
public:
    int countOdds(int low, int high) {
        // (number of odd from 1 to high) - (number of odd from 1 to low - 1)
        return (high + 1) / 2 - low / 2;
    }
};