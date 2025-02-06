#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class MyCalendar {
public:
    MyCalendar() {}
    
    bool book(int start, int end) {
        for(auto& x: v)
            if(start >= x[0] && start < x[1] || end > x[0] && end <= x[1] || start < x[0] && end > x[1]) return false;
        v.push_back({start, end});
        return true;
    }

private:
    vector<vector<int>>v;
};
