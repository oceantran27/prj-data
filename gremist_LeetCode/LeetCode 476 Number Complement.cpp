#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 476 Number Complement.cpp

class Solution {
public:
    int findComplement(int num) {
        int mask = ~0;
        while (num & mask) {
            mask <<= 1;
        }
        return ~mask ^ num;
    }
};