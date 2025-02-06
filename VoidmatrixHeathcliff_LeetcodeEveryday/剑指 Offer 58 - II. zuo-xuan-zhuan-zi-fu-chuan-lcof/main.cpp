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
    string reverseLeftWords(string s, int n) {
        return s.substr(n, s.size() - n) + s.substr(0, n);
    }
};