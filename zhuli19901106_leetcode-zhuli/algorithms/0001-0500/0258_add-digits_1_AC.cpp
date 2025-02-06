#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
// Digital root.
class Solution {
public:
    int addDigits(int num) {
        return num > 0 ? (num + 8) % 9 + 1 : 0;
    }
};
