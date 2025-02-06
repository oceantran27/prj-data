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
    bool isPowerOfFour(int n) {
        int bits = 0;
        int idx = -1;
        int i = 0;
        while(n) {
            if((n & 1) == 1) {
                if(bits == 1) return false;
                bits++;
                idx = i;
            }
            i++;
            n >>= 1;
        }
        if(idx == -1) return false;
        
        return (idx % 2) == 0;
    }
};