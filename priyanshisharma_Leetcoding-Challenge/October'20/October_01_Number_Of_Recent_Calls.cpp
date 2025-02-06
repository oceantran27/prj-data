#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class RecentCounter {
public:
    vector<int> v;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        v.push_back(t);
        while (v[0] < t - 3000)
            v.erase(v.begin());
        return v.size();
    }
};
