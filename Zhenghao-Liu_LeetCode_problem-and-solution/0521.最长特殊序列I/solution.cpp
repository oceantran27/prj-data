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
        int a_size=a.size(),b_size=b.size();
        if (a_size!=b_size)
            return max(a_size,b_size);
        return a==b ? -1 : a_size;
    }
};
