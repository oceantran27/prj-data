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
    int arrangeCoins(int s) {
        return (int) (-1 + sqrt(1 + 8 * (long long) s)) / 2;
    }
};
