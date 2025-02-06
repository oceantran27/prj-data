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
    
    bool isUgly(int n) {
    
        vector<int> primes = {2, 3, 5};
        
        // Find all the prime factors of number
        if(n <= 0)                              return false;
        if(n == 1)                              return true;
        
        for(auto &x : primes) {
            while(n % x == 0)                   n = n / x;
        }
        
        return (n == 1);
    }
    
};