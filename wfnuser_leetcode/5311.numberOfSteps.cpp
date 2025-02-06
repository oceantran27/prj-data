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
        while(num) {
            if (num % 2 == 0) {
                num = num / 2;
                step++;
            } else {
                num = num - 1;
                step++;
            }
        }
        
        return step;
    }
};