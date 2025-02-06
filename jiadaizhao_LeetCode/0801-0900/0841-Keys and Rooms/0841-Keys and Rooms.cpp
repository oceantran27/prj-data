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
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited;
        queue<int> Q;
        Q.push(0);
        visited.insert(0);
        while (!Q.empty()) {
            int index = Q.front();
            Q.pop();
            for (int k : rooms[index]) {
                if (!visited.count(k)) {
                    Q.push(k);
                    visited.insert(k);
                }
            }
        }
        return visited.size() == rooms.size();
    }
};
