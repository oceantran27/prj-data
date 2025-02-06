#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// Author - Shadowpii

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {    
    string res=s;

    for(int i=0; i<s.size();i++){
        res[indices[i]] = s[i];
    }
    
    return res;
    }
};