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
    int trailingZeroes(int n) {
        long long num = 5;
        int count = 0;
        while(num <= n){
            count += (n / num);
            num *= 5;
        }
        return count;
    }
};