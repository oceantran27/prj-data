#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 201 Bitwise AND of Numbers Range.cpp

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        return m < n ? rangeBitwiseAnd(m >> 1, n >> 1) << 1 : m;
    }
};