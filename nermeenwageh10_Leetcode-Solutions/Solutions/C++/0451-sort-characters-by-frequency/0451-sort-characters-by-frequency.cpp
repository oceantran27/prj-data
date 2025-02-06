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
    string frequencySort(string s) {
        vector<int> frq(128, 0);
        for (int i = 0; i < s.size(); i++)
            frq[s[i]]++;
        sort(s.begin(), s.end(),[&](char& a, char& b){
            if (frq[a] != frq[b]) return frq[a] > frq[b];
            return a > b;
        });
        return s;
    }
};