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
    int numTrees(int n) {
        vector<int> sol(n+1, 0);
        
        sol[0] = 1;
        
        for(int i = 1; i < sol.size(); i++){
            for(int j = 0; j < i; j++){
                sol[i] = sol[i] + (sol[j] * sol[i-j-1]);
            }
        }
        
        return sol[n];
    }
};
