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
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size();
        int o=0,e=0;
        for(int i=0;i<position.size();i++){
            if(position[i]%2==0)
                o++;
            else
                e++;      
        }
        return min(o,e);
    }
};