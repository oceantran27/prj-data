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
        stringstream ss;
        ss << s;
        string temp;
        int ans=0;
        while (ss >> temp)
            ++ans;
        return ans;
    }
};
