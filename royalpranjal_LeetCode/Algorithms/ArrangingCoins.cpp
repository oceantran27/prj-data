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
    int arrangeCoins(int n) {
        int ans = 0, curr = 1;
        
        while(curr <= n){
            n = n - curr;
            ans++;
            curr++;
        }
        
        return ans;
    }
};
