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
    vector<int> swapNumbers(vector<int>& n) {
        n[0] ^= n[1] ^= n[0] ^= n[1];
        return n;
    }
};