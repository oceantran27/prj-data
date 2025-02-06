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
private:
    vector<vector<int>> list;
    vector<int> combination;

public:
    vector<vector<int>> combine(int n, int k) {
        generator(n, k, 1);
        return list;
    }
    void generator(int n, int k, int s) {
        if (combination.size() == k) {
            list.push_back(combination);
            return;
        }
        if (s > n) return;
        for (int i = s; i <= n; i++) {
            combination.push_back(i);
            generator(n, k, i + 1);
            combination.pop_back();
        }
    }
};
