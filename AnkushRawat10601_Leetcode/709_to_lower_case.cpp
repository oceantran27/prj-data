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
    string toLowerCase(string s) {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        return s;
    }
};