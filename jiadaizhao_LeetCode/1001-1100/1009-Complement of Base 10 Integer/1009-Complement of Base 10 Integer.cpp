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
    int bitwiseComplement(int N) {
        int limit = 2;
        while (N >= limit) {
            limit <<= 1;
        }
        return limit - 1 - N;
    }
};
