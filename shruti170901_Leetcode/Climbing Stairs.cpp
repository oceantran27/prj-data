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
    int fib(int n) { 
        double phi = (1 + sqrt(5)) / 2; 
        return round(pow(phi, n) / sqrt(5)); 
    } 
    int climbStairs(int n) {
         n=fib(n+1);
        return n;
    }
};

