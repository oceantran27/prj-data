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
    int commonFactors(int a, int b) {
        //we have to find no of common factors here.
        int maxi = min(a, b);
        int count = 0;
        for(int i = 1; i <= maxi; i++) {
            if(a % i == 0 && b % i == 0) count++;
        }
        return count;
    }
};