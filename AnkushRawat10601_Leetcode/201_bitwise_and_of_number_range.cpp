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
    int rangeBitwiseAnd(int m, int n) {
        int len = 0;
        while (m != n) { m >>= 1; n >>= 1; ++len; }
        return n << len;
    }
};