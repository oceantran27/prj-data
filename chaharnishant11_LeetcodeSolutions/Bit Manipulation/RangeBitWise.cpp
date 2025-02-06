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
    int rangeBitwiseAnd(int a, int b) {
       while(a < b){ 
            b -= (b & -b); 
        } 
        return b;
    }
};