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
    vector<int> countBits(int num) {
        vector<int> count(num + 1, 0);
        for (int i = 1; i <= num; ++i)
            count[i] = count[i / 2] + (i % 2);
        return count;
    }
};