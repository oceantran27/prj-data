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
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> r;
        for (char &i:ransomNote)
            ++r[i];
        unordered_map<char,int> m;
        for (char &i:magazine)
            ++m[i];
        for (auto &i:r)
            if (m.find(i.first)==m.end() || m.at(i.first)<i.second)
                return false;
        return true;
    }
};
