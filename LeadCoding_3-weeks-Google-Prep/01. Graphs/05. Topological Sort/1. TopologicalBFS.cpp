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
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> orderedCourses;
        unordered_map<int,vector<int>> graph;
        vector<int> inDegree(numCourses);
        for(auto prerequisite : prerequisites) {
            graph[prerequisite[1]].push_back(prerequisite[0]);
            inDegree[prerequisite[0]]++;
        }
        queue<int> topoQueue;
        
        for(int i = 0; i < numCourses; i++) {
            if(inDegree[i] == 0) {
                topoQueue.push(i);
            }
        }
        while(topoQueue.size()) {
            auto course = topoQueue.front();
            topoQueue.pop();
            orderedCourses.push_back(course);
            for(auto nbr : graph[course]) {
                inDegree[nbr]--;
                if(inDegree[nbr] == 0)topoQueue.push(nbr);
            }
        }
        if(orderedCourses.size() < numCourses) {
            return {};
        }
        return orderedCourses;
    }
};