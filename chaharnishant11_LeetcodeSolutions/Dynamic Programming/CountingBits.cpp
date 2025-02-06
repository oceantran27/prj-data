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
    int count(int n){
        int count = 0; 
        while (n) { 
            count += n & 1; 
            n >>= 1; 
        } 
        return count; 
    }
    
    vector<int> countBits(int num) {
        vector<int> ans;
        for(int i=0;i<=num;i++){
            ans.push_back(count(i));
        }
        return ans;
    }
};

// There is an inbuilt function too called __builtin_popcount(i)