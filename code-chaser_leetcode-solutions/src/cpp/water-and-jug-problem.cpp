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
    bool canMeasureWater(int a, int b, int c) {
        if(c>a+b)return false;
        if(c% __gcd(a , b) == 0)return true;
        return false;
    }
};
