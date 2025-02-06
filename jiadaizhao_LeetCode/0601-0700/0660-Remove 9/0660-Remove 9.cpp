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
    int newInteger(int n) {
        int result = 0;
        int base = 1;
        while (n) {
            result += (n % 9) * base;
            n /= 9;
            base *= 10;
        }
        
        return result;
    }
};
