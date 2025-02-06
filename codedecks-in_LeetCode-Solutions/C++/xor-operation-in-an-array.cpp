#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// difficulty easy
class Solution {
public:
    int xorOperation(int n, int start) {
        // brute force method
        int ans = 0;
        for(int i=0;i<n;i++){
            ans ^= (start + 2*i);
        }
        return ans;
    }
};