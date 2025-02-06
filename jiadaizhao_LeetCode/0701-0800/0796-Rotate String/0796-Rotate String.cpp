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
    bool rotateString(string A, string B) {
        if (A.size() != B.size()) {
            return false;
        }
        string s = A + A;
        return s.find(B) != -1;
    }
};
