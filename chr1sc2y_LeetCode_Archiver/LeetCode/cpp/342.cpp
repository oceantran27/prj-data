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
    bool isPowerOfFour(int num) {
        if (num <= 0)
            return false;
        while (num > 1) {
            if ((num & 1) || (num & 2))
                return false;
            num >>= 2;
        }
        return true;
    }
};
