#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Arranging Coins.
//Memory Usage: 7.3 MB, less than 100.00% of C++ online submissions for Arranging Coins.

class Solution {
public:
    int arrangeCoins(int n) {
        //find x s.t. (x + 1) * x / 2 <= n
        //x*x < x*x+x <= 2*n < (x+1)*(x+1)
        //x < sqrt(2*n) < x+1
        int x = ceil(sqrt(2)*sqrt(n));
        
        while((x+1)*(x/2.0) > n){
            x--;
        }
        
        return x;
    }
};
