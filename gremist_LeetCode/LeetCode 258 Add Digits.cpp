#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 258 Add Digits.cpp

class Solution {
public:
    int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
};