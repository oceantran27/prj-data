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
    int lastRemaining(int n) {
        bool left = true;
        int head = 1;
        int step = 1;
        while (n > 1) {
            if (left || n % 2 == 1) {
                head += step;
            }
            
            step *= 2;
            n /= 2;
            left = !left;
        }
        
        return head;
    }
};
