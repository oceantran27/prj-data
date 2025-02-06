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
    int hammingDistance(int x, int y) {
        int count=0;
        bitset<32>binary1(x);bitset<32>binary2(y);
        for(int i=0;i<32;i++)if(binary1[i]!=binary2[i])count++;
        return count;
    }
};
