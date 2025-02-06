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
    bool isHappy(int n) {
        unordered_set<int> visited{n};
        while (n != 1) {
            int temp = n;
            n = 0;
            while (temp) {
                int i = temp % 10;
                n += i * i;
                temp /= 10;
            }
            if (visited.count(n)) {
                return false;
            }
            visited.insert(n);
        }
        
        return true;
    }
};
