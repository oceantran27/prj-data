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
        if (dividend < 0 && divisor < 0) {
            if (divisor == INT_MIN)
                divisor += 1;
            divisor *= -1;
            if (dividend == INT_MIN)
                dividend += 1;
            dividend *= -1;
        }
        return (dividend / divisor);
    }
};
