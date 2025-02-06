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
    string generateTheString(int n) {
        return 'a' + string(n - 1, 'b' - (n & 1));
    }
};
