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
    bool isPalindrome(int x) {
        long int X = x;
        long int temp = 0;
        
        X = abs(X);
        
        while(X){
            temp = temp*10 + X%10;
            X = X/10;
        }
        
        X = x;
        
        if(X == temp){
            return true;
        }    
        
        return false;
    }
};
