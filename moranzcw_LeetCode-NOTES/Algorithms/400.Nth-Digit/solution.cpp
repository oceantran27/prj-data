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
    int findNthDigit(int n) {
        long digit = 1, ith = 1, base = 9;
        while(n > base*digit)
        {
            n -= base*(digit++);
            ith += base;
            base *= 10;
        }
        return to_string(ith+(n-1)/digit)[(n-1)%digit]-'0';
    }
};