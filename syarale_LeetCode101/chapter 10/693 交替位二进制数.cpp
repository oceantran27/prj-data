#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// 693. Binary Number with Alternating Bits 

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int tmp = n ^ (n>>1);
        return (tmp == INT_MAX || (tmp & (tmp+1)) == 0);
    }
};
