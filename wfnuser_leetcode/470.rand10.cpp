#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        int r5 = 8;
        int r2 = 8;
        while(r5>5) {
            r5 = rand7();
        }

        while(r2>=7) {
            r2 = rand7();
        }
        r2 = r2 % 2;

        return r2*5+r5;
    }
};