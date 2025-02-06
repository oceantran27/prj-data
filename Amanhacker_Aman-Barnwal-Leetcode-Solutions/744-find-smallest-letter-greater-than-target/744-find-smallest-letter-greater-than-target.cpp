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
    
    char nextGreatestLetter(vector<char>& letters, char target) {
    
        for(auto &x : letters) {
            if(x > target)                                      return x;
        }
        
        return letters[0];
    }
    
};