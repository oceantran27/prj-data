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
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        int bits_size=bits.size();
        while (i<bits_size-1)
            if (bits.at(i)==1)
                i+=2;
            else
                ++i;
        return i==bits_size-1;
    }
};
