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
    int countSegments(string s) {
        int cnt = 0;
        string word;
        stringstream ss(s);
        while (ss >> word) ++cnt;
        return cnt;
    }
};