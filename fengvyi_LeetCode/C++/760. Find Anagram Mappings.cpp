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
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int>res;
        unordered_map<int, int>m;
        for(int i = 0; i < B.size(); i++) m[B[i]] = i;
        for(int x: A) res.push_back(m[x]);
        return res;
    }
};
