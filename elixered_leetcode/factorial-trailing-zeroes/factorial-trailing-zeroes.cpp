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
    int trailingZeroes(int n) {
        int count = 0;
        for(int i=5; i<=n; i*=5)
            count += n/i;
        return count;
    }
};