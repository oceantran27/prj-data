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
        for (char &i:str)
            if (i<='Z' && i>='A')
                i=i+('a'-'A');
        return str;
    }
};
