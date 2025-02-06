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
    int deal(int n) {
        int res = 0;
        while(n > 0) {
            int m = n % 10;
            n = n / 10;
            res += m * m;
        }
        return res;
    }
    
    bool isHappy(int n) {
        std::set<int> s;
        s.insert(n);
        while(n != 1) {
            n = deal(n);
            if(s.find(n) != s.end()) {
                return false;
            }
            s.insert(n);
        }
        return true;
    }
};

