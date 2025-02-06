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
    bool rotateString(string s, string goal) {
        
        if(s.length()!=goal.length())
            return false;

        string str = s + s;
        size_t found = str.find(goal);
       
        if(found != string::npos){
            return true;
        }
        else{
            return false;
        }

    }
};