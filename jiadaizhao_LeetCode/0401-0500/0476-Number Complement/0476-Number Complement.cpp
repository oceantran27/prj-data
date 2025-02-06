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
    int findComplement(int num) {
        unsigned int limit = 1;
        while (num >= limit) {
            limit <<= 1;
        }
        return limit - 1 - num;
    }
};
