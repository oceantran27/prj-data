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
    int integerBreak(int n) {
        //用数学的均值不等式，尽可能都拆成3
        if(n <= 3) 
            return n - 1;
        if(n % 3 == 0) 
            return pow(3, n / 3);
        if(n % 3 == 1) 
            return 4 * pow(3, (n - 4) / 3);
        if(n % 3 == 2) 
            return 2 * pow(3, n / 3);
    }
};