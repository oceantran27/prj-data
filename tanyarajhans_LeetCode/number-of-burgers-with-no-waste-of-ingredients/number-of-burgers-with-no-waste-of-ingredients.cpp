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
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int total=cheeseSlices;
        for(int j=0;j<=total;j++){
            int s=total-j;
            if(4*j+2*s==tomatoSlices)
                return{j,s};
        }
        return {};
    }
};