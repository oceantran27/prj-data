#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Soace: O(1)

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};
