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
    bool judgeSquareSum(int c) {
        for(int i=0;(long long)(i)*i<=c;++i){
          int j= sqrt(c-i*i);
          if(i*i+j*j==c) return true;
        }
        return false;
    }
};