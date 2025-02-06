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
    int getImportance(vector<Employee *> employees, int id) {
        unordered_map<int, Employee *> em;
        for (auto &e:employees)
            em[e->id] = e;
        return DFS(id, em);
    }

    int DFS(int id, unordered_map<int, Employee *> &em) {
        int sum = em[id]->importance;
        for (auto &e:em[id]->subordinates)
            sum += DFS(e, em);
        return sum;
    }
};