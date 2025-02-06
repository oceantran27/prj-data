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
    
    int countOdds(int low, int high) {
    
        int count = 0;
        
        count += (high - low) / 2;

        if(low % 2 == 1 || high % 2 == 1)                   count++;
        
        return count;
    }
    
};