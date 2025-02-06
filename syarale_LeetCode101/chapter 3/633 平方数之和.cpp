#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// 633.ƽ֮

class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        
        while (i <= j) {
            int total = i * i + j * j;
            
            if (total == c) {
                return true;
            }
            
            if (total > c) {
                j--;
            } else {
                i++;
            }
        }
        
        return false;
    }
}; 
