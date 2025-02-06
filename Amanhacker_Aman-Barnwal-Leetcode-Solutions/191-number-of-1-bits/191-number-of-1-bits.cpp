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
    
    int hammingWeight(uint32_t n) {
    
        int count = 0;
        
        while(n) {
            count += (n % 2);
            n >>= 1;
        }
        
        return count;     
    }
    
};