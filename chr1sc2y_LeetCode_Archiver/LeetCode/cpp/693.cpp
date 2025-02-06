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
    bool hasAlternatingBits(int n) {
        while(n > 0) {
            if((n & 1) == ((n >> 1) & 1))
                return false;
            n >>= 1;
        }
        return true;
    }
};