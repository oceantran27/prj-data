#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Link to the " Repeated Substring Pattern " Problem ==>> https://leetcode.com/problems/repeated-substring-pattern/ 
   
Link to the complete Explaination Video ==>> https://youtu.be/zmxw7jW7tQg

*/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        string t = s; 
        
        for(int i=0; i<s.size()-1; i++){ 
            t.push_back(t[0]);
            t.erase(0,1);
            if(t==s) { 
                return true; 
            }
        }
        return false;
    }
};