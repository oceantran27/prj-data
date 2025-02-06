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
    int numberOfSteps (int num) {
        int step = 0;
        while (num != 0) {
            if (num & 1) {
                --num;
            }
            else {
                num >>= 1;
            }
            ++step;
        }
        
        return step;
    }
};
