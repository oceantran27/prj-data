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
        if (num==1)
            return true;
        else if (num%4==0 && num!=0)
            return isPowerOfFour(num/4);
        return false;
    }
};
