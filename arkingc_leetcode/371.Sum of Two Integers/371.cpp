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
        int tp = (a & b) << 1;
        a = a ^ b,b = tp;
        while(b){
            tp = (a & b) << 1;
            a = a ^ b;
            b = tp;
        }
        return a;
    }
};