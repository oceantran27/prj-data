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
    int flipLights(int n, int m) {
        if (n == 0 || m == 0) {
            return 1;
        }
        if (n == 1) {
            return 2;
        }
        if (n == 2) {
            return m == 1 ? 3 : 4;
        }
        if (m == 1) {
            return 4;
        }
        if (m == 2) {
            return 7;
        }
        return 8;
    }
};
