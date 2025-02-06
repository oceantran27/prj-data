#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 371 Sum of Two Integers.cpp

class Solution {
public:
    int getSum(int a, int b) {
        while (a & b) {
            int _xor = a ^ b;
            a = (a & b) << 1;
            b = _xor;
        }
        return a ^ b;
    }
};