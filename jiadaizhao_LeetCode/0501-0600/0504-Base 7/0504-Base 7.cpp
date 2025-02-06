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
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        
        string result;
        int sign = 1;
        if (num < 0) {
            sign = -1;
        }
        
        long n = abs(num);
        while (n) {
            result += '0' + (n % 7);
            n /= 7;
        }
        
        if (sign == -1) {
            result += '-';
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
