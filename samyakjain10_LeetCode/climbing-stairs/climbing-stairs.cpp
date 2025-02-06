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
        int arr[n+1];
        
        arr[0] = 1;
        arr[1] = 1;
        
        for(int i = 2; i<=n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        
        return arr[n];
        
    }
};