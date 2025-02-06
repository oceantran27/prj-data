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
    int addDigits(int num) {
        if(num!=0 && num%9==0) return 9;
        return num%9;
    }
};