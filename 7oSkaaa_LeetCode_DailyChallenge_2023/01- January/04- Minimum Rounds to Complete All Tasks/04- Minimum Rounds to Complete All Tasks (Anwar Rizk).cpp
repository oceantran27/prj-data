#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: Anwar Rizk

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int ans = 0;
        // count the frequency of each task
        map < int, int > occ;
        for(auto& i : tasks) occ[i]++;
        for(auto& [f, s] : occ){
            // if there is only one task of any type then we can't complete it
            if(s == 1) return -1;
            // if there are more than 1 task of any type then we can complete them
            // in [tasks/3] and if there is a remainder then we need to add 1 to the answer
            ans += s/3 + (s % 3 != 0);
        }
        return ans;
    }
};