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
    int hammingDistance(int x, int y) {
        int ans = 0;
        long int temp = 1;
        
        while(temp <= x || temp <= y){
            if((temp & x) != (temp & y)){
                ans++;
            }
            temp = temp << 1;
        }
        
        return ans;
    }
};
