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
    int brokenCalc(int X, int Y) {
        int num = 0;
        while (X < Y) {
            if (Y & 1) {
                ++Y;
            }
            else {
                Y >>= 1;
            }
            ++num;
        }
        
        return num + X - Y;
    }
};
