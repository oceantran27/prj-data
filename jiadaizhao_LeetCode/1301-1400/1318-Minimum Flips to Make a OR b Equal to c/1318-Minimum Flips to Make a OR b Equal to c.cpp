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
    int minFlips(int a, int b, int c) {
        int diff = (a | b) ^ c;
        int count = 0;
        for (int i = 0; i < 31; ++i) {
            int mask = 1 << i;
            if (diff & mask) {
                count += ((a & mask) && (b & mask) && !(c & mask)) ? 2 : 1;
            }
        }
        return count;
    }
};
