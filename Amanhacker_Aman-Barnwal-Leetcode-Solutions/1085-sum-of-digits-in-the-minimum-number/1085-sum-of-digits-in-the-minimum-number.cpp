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
    
    int sumOfDigits(vector<int>& a) {
    
        int res = 0;
        int n = a.size();
        
        int ele = *min_element(a.begin(), a.end());
        
        while(ele > 0) {
            res += ele % 10;
            ele /= 10;
        }
        
        if(res % 2 == 1)                                                return 0;
        else                                                            return 1;
    }
    
};