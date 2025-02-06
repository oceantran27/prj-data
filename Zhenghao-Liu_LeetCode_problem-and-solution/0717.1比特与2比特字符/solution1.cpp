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
        bool ans=true;
        int bits_size=bits.size();
        for (int i=0;i<bits_size;)
            if (bits.at(i)==1)
            {
                i+=2;
                ans=false;
            }
            else
            {
                ++i;
                ans=true;
            }
        return ans;
    }
};
