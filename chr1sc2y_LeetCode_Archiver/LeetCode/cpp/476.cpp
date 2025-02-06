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
        int count = 0;
        int x = num;
        while(x) {
            ++count;
            x >>= 1;
        }
        num = ~num;
        for(int i = 0; i < 32 - count; ++i)
            num <<= 1;
        for(int i = 0; i < 32 - count; ++i)
            num >>= 1;
        return num;
    }
};