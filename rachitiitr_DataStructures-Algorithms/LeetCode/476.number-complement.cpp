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
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int numberOfBits = log2(n) + 1; // 100 log10(100) => 2+1 => 3
        int mask = (1 << numberOfBits) - 1; // pow(2, numberOfBits)
        return mask ^ n;
    }
};
