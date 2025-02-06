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
    int countNumbersWithUniqueDigits(int n) {
        int count = 1, product = 9, base = 9;
        for (int i = 1; i <= n && i <= 10; ++i) {
            count += product;
            product *= base;
            --base;
        }
        
        return count;
    }
};
