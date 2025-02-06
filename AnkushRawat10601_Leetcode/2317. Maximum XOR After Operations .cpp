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
    int maximumXOR(vector<int>& nums) {
      int y = 0;
for(int x :nums)y = y|x;
return y;  
    }
};