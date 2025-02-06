#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int dfs(map<int, Employee*> &mp, int id){
        int sum=mp[id]->importance;
        for(int i: mp[id]->subordinates){
            sum+=dfs(mp, i);
        }
        return sum;
    }
    int getImportance(vector<Employee*> employees, int id) {
        map<int, Employee*> mp;
        for(auto e: employees){
            mp[e->id]=e;
        }
        return dfs(mp,id);
    }
};