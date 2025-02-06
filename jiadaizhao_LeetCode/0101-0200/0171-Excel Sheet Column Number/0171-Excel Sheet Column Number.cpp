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
    int titleToNumber(string s) {
        int result = 0;
        for (int c : s) {
            int i = c - 'A' + 1;
            result = result * 26 + i;
        }
        
        return result;
    }
};
