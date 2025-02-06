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
        int prev = n & 1;
        n >>= 1;
        while (n) {
            int curr = n & 1;
            if (curr == prev) {
                return false;
            }
            prev = curr;
            n >>= 1;
        }
        
        return true;
    }
};
