#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// medium
class Solution {
public:
    int trailingZeroes(int n) {
        int sum = 0;
        while (n > 0) {
            sum += (n /= 5);
        }
        return sum;
    }
};
