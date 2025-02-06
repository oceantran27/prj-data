#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool checkPowersOfThree(int n) {
        while (n) {
            int r = n % 3;
            if (r > 1) return false;
            n /= 3;
        }
        return true;
    }
};
