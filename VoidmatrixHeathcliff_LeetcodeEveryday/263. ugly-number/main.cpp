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
    bool isUgly(int n) {
        if (n < 1) return false;
        while (!(n % 5)) n /= 5;
        while (!(n % 3)) n /= 3;
        while (!(n % 2)) n /= 2;
        return n == 1;
    }
};