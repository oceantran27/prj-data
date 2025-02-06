#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

class Vector2D {
public:
    Vector2D(vector<vector<int>>& vec2d) : vec(vec2d) {
        x = vec.begin();
        if (x != vec.end()) {
            y = x->begin();
            adjustNextIter();
        }
    }

    int next() {
        const auto ret = *y;
        ++y;
        adjustNextIter();
        return ret;
    }

    bool hasNext() {
        return x != vec.end() && y != x->end();
    }
    
    void adjustNextIter() {
        while (x != vec.end() && y == x->end()) { 
            ++x;
            if (x != vec.end()) {
                y = x->begin();
            }
        }
    }

private:
    vector<vector<int>>& vec;
    vector<vector<int>>::iterator x;
    vector<int>::iterator y;
};
