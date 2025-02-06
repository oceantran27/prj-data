#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Reference: https://en.wikipedia.org/wiki/Digital_root#Congruence_formula
class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};
