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
    int climbStairs(int n) {
       if (n <= 2)  return n;
       int prv = 2, prvPrv = 1, cur;
       n-=2;
       while(n--){
        cur = prv + prvPrv;
        prvPrv = prv;
        prv = cur;
       } 
       return cur;
    }
};