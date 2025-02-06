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
    int similarPairs(vector<string>& words) {
        unordered_map<int,int>m;
        int res = 0; 
        for(auto & w: words){
            int bits = 0;
            for(auto& ch: w){
                bits |= (1<< (ch - 'a'));
            }
            res += m[bits]++;
        }
        return res;
    }
};