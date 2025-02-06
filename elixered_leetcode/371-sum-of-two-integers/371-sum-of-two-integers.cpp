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
    int getSum(int a, int b) {
        unsigned c;
        while(b)
        {
            c = (a&b);
            a = (a^b);
            b = (c)<<1;
        }
        return a;
    }
};