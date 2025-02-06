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
    vector<int> plusOne(vector<int>& digits) {
        
        int carry = 1;
        
        for(int i = digits.size()-1; i >= 0; i--){
            int sum = digits[i] + carry;
            digits[i] = sum%10;
            carry = sum/10;
        }  
        
        if(carry == 1){
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};
