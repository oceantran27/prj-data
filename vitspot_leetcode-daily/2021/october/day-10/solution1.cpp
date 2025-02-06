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
        int rangeBitwiseAnd(int mleft, int nright) {
            
            int k = 0;
          while(mleft != nright){
             mleft >>= 1;
             nright >>= 1;
             k++;
          }
          return mleft << k;
        }
    };