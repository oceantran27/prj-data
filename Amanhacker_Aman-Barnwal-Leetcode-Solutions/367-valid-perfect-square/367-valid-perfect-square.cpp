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
    
    bool isPerfectSquare(int num) {
    
        long n = num;
        
        while(n * n > num) {
            n = (n + num / n) / 2;
        }
        
        return (n * n == num);
    }
    
};