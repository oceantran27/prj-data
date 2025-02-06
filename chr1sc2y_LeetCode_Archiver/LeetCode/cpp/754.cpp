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
    int num;
public:
    int reachNumber(int target) {
        int m = 0;
        target = abs(target);
        while (target > 0)
            target -= ++m;
        return target % 2 == 0 ? m : m + 1 + m % 2;
    }
};
