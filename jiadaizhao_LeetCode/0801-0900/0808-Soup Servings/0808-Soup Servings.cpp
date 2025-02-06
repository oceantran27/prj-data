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
    double soupServings(int N) {
        if (N >= 5000) {
            return 1;
        }
        table = vector<vector<double>>(200, vector<double>(200));
        return soupServings((N + 24) / 25, (N + 24) / 25);
    }
    
private:
    vector<vector<double>> table;
    double soupServings(int a, int b) {
        if (a <= 0 && b <= 0) {
            return 0.5;
        }
        
        if (a <= 0) {
            return 1;
        }
        
        if (b <= 0) {
            return 0;
        }
        
        if (table[a][b] > 0) {
            return table[a][b];
        } 
        
        return table[a][b] = 0.25 * (soupServings(a - 4, b) + soupServings(a - 3, b - 1) +
                                     soupServings(a - 2, b - 2) + soupServings(a - 1, b - 3));
    }
};
