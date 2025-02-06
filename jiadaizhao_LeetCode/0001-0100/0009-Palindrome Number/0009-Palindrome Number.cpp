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
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        
        int power = 1;
        while (x / power >= 10) {
            power *= 10;
        }
        
        while (power > 1) {
            int num1 = x % 10;
            int num2 = x / power;
            if (num1 != num2) {
                return false;
            }
            
            x = x % power / 10;
            power /= 100;
        }
        
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x > 0 && x % 10 == 0)) {
            return false;
        }
        
        int y = 0;
        while (x > y) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return x == y || y / 10 == x;
    }
};
