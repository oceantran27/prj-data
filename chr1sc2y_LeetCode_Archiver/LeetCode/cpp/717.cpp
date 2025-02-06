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
    bool isOneBitCharacter(vector<int> &bits) {
        int n = bits.size();
        for(int i = 0; i < n; ++i ) {
            if(i == n - 1 && bits[i] == 0)
                return true;
            if(bits[i] == 1)
                ++i;
        }
        return false;
    }
};