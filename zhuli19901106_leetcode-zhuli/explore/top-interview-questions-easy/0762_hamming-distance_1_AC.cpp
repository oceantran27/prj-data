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
    int hammingDistance(int x, int y) {
        x ^= y;
        int cnt = 0;
        while (x != 0) {
            x = x & x - 1;
            ++cnt;
        }
        return cnt;
    }
};
