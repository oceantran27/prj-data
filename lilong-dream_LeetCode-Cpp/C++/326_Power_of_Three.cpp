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
    bool isPowerOfThree(int n) {
        if(n == 0) {
            return false;
        }
        int m = log10(n) / log10(3);
        if(n == pow(3, m)) {
            return true;
        }
        return false;
    }
};

