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
    bool isPerfectSquare(int num) {
        if (num < 2)
            return true;
        long long x = num / 2;
        while (x * x > num)
            x = (x + num / x) / 2;
        return x * x == num;
    }
};
