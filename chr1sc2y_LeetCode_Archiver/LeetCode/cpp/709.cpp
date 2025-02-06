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
    string toLowerCase(string str) {
        for (int i = 0; i < str.size(); ++i)
            str[i] = (str[i] >= 'A' && str[i] <= 'Z' ? str[i] += 'a' - 'A' : str[i]);
        return str;
    }
};