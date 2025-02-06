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
    vector<string> permutation(string s) {
        sort(s.begin(),s.end());
        vector<string> ans;
        ans.reserve(1e6);
        do {
            ans.push_back(s);
        }while (next_permutation(s.begin(),s.end()));
        return ans;
    }
};