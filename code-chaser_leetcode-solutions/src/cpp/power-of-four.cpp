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
    bool isPowerOfFour(int n) {
        if(n<=0) return 0;
        if((n&(n-1))!=0) return 0;
        if(!(n & 0x55555555)) return 0;
        return 1;
    }
};
