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
    string removeDuplicates(string S) {
        string strResult;
        for (char c : S)
            !strResult.empty() && strResult.back() == c ? strResult.pop_back() : strResult.push_back(c);
        return strResult;
    }
};