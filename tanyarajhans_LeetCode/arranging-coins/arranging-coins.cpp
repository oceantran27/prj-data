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
    
    int arrange(int n, int row){
        if(n<row)
            return row-1;
        return arrange(n-row, row+1);
    }
    
    int arrangeCoins(int n) {
        return arrange(n, 1);
    }
};
