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
    int numberOfMatches(int n) {
        int matches = 0;
        int team = n;
        while(team!=1){
        	matches += team/2;
        	team = (team+1)/2;
        }
        return matches;
    }
};