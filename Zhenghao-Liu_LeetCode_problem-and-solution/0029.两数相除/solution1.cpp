#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//#include<functional>
class Solution {
public:
    int divide(int dividend, int divisor) {
        divides<double> d;
        double y=d(dividend*1.0,divisor);
        if (y>INT_MAX || y<INT_MIN)
            return INT_MAX;
        return int(y);
    }
};
