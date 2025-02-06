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
        if (A.length() != B.length()) return false;
        
        string bothStrings = A + A;
        
        return bothStrings.find(B) != string::npos;
    }
};