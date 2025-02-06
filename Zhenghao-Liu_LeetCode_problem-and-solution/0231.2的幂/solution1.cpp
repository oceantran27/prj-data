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
    bool isPowerOfTwo(int n) {
        long long a=1;
        while (a<n)
            a=a<<1;
        return n==a;
    }
};
