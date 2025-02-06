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
        if (n==1)
            return true;
        if (n==0)
            return false;
        if (n%3==0)
            return isPowerOfThree(n/3);
        else
            return false;
    }
};
