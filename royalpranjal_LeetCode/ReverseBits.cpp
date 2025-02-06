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
    uint32_t reverseBits(uint32_t n) {
        uint32_t x = 1, ans = 0;
        
        int power = 31;
        
        while(x){
            if((x & n) != 0){
                ans = ans + pow(2, power);
            }    
            power--;
            x = x << 1;
        }
        
        return ans;
    }
};
