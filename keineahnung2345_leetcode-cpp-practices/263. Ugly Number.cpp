#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Runtime: 4 ms, faster than 57.61% of C++ online submissions for Ugly Number.
//Memory Usage: 7.1 MB, less than 100.00% of C++ online submissions for Ugly Number.
class Solution {
public:
    bool isUgly(int num) {
        if(num == 0) return false;
        while(num % 2 == 0) num /= 2;
        while(num % 3 == 0) num /= 3;
        while(num % 5 == 0) num /= 5;
        return num == 1;
    }
};
