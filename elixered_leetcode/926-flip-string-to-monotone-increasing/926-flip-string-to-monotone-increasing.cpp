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
    int minFlipsMonoIncr(string s) {
        int n = s.size();
        int one = 0;
        int flip = 0;
        for(auto c:s)
        {
            if(c=='1')
                one++;
            else
                flip++;
            flip = min(one,flip);
        }
        return min(flip,one);
    }
};