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
    vector<vector<int> > vv;
    void compute(vector<int> &S, int index, vector<int> &v) {
        if(index >= S.size()) {
            vv.push_back(v);
            return;
        }
        compute(S, index + 1, v);
        v.push_back(S[index]);
        compute(S, index + 1, v);
        v.pop_back();
    }
    vector<vector<int> > subsets(vector<int> &S) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        sort(S.begin(), S.end());
        vv.clear();
        vector<int> v;
        compute(S, 0, v);
        return vv;
    }
};