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

    int countOnes(int dig) {
        
        int count = 0;
        
        while(dig > 0) {
            count += (dig % 2);
            dig = dig / 2;
        }
        
        return count;
    }
    
    vector<int> countBits(int n) {
    
        vector<int> res(n + 1);
        
        for(int i=0; i<=n; i++) {
            
            int dig = i;
            
            // res[i]  is the no.of 1's in binary representation of dig
            res[i] = countOnes(dig);
        }
        
        return res;
    }
    
};