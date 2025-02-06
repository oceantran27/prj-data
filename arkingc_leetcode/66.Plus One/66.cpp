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
        int jw = 0,sz = digits.size();
        int i = sz - 1;
        while(i >= 0 && digits[i] == 9){
            digits[i] = 0;
            i--;
        }
        if(i >= 0)  digits[i] += 1;
        else{
            digits[0] = 1;
            digits.push_back(0);
        }
        
        return digits;
    }
};