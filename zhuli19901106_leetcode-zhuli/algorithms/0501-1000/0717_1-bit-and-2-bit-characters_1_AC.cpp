#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int i;
        int len;
        
        i = 0;
        while (i < n) {
            len = (bits[i] == 0 ? 1 : 2);
            i += len;
        }
        return len == 1;
    }
};
