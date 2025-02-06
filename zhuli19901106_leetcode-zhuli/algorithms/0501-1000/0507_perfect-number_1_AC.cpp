#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num < 2) {
            return false;
        }
        
        int s = 1;
        int i;
        for (i = 2; i <= num / i; ++i) {
            if (num % i != 0) {
                continue;
            }
            s += i;
            if (i != num / i) {
                s += num / i;
            }
        }
        
        return num == s;
    }
};
