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
    int calPoints(vector<string>& ops) {
        vector<int> St;
        for (string op : ops) {
            if (op == "+") {
                int p1 = St[St.size() - 2];
                int p2 = St.back();
                St.push_back(p1 + p2);
            }
            else if (op == "D") {
                int p = St.back();
                St.push_back(p * 2);
            }
            else if (op == "C") {
                St.pop_back();
            }
            else {
                St.push_back(stoi(op));
            }
        }
        
        int sum = 0;
        for (int p : St) {
            sum += p;
        }
        
        return sum;
    }
};
