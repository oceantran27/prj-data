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
    int getSum(int a, int b) {       
        while (b) {
            int carry = a & b;
            a = a ^ b ;
            b = carry << 1;
        }
        
        return a;
    }
};
