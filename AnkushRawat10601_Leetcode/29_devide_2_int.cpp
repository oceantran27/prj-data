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
    int divide(int dividend, int divisor) {
        if(divisor == 0||(dividend == INT_MIN && divisor == -1))
            return INT_MAX;
        else
            return (dividend-dividend%divisor)/divisor;
    }
};