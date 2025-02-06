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
    int findLUSlength(string a, string b) {
        if(a!=b)
            return max((int)a.size(),(int)b.size());
        else return -1;
    }
};