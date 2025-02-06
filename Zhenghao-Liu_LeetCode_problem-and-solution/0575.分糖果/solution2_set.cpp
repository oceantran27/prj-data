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
    int distributeCandies(vector<int>& candies) {
        return min((int)unordered_set<int>(candies.begin(),candies.end()).size(),(int)candies.size()/2);
    }
};
