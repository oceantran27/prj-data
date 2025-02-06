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
    int sumBase(int n, int k) {
        int res = 0;
        for (; n > 0; n /= k)
            res += n % k;
        return res;
    }
};