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
    char findTheDifference(string s, string t) {
        int res = 0;
        for(auto c:s){
            res^=c;
        }
        for(auto c:t){
            res^=c;
        }
        return res;
    }
};
