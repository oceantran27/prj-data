#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Runtime: 4 ms, faster than 97.22% of C++ online submissions for Path Crossing.
//Memory Usage: 7 MB, less than 100.00% of C++ online submissions for Path Crossing.
class Solution {
public:
    bool isPathCrossing(string path) {
        set<vector<int>> visited;
        pair<set<vector<int>>::iterator, bool> res;
        int i = 0, j = 0;
        
        visited.insert({0, 0});
        
        for(char c : path){
            switch(c){
                case 'N':
                    res = visited.insert({--i, j});
                    if(!res.second) return true;
                    break;
                case 'S':
                    res = visited.insert({++i, j});
                    if(!res.second) return true;
                    break;
                case 'W':
                    res = visited.insert({i, --j});
                    if(!res.second) return true;
                    break;
                case 'E':
                    res = visited.insert({i, ++j});
                    if(!res.second) return true;
                    break;
            }
        }
        
        return false;
    }
};
