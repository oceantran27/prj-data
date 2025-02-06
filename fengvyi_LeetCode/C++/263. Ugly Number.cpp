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
    bool isUgly(int num) {
        return num ? !(num%2) ? isUgly(num/2) : !(num%3) ? isUgly(num/3) : !(num%5) ? isUgly(num/5) : num == 1 : false;
    }
};
