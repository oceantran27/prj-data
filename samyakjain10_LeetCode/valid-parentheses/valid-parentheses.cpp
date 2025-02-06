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
    bool isValid(string s) {
        stack<char> parent;
        for (char& c : s) {
            switch (c) {
                case '(': 
                case '{': 
                case '[': parent.push(c); break;
                case ')': 
                    if (parent.empty() || parent.top()!='(') return false; 
                    else parent.pop(); break;
                case '}': 
                    if (parent.empty() || parent.top()!='{') return false; 
                    else parent.pop(); break;
                case ']': 
                    if (parent.empty() || parent.top()!='[') return false; 
                    else parent.pop(); break;
                default: ; // pass
            }
        }
        return parent.empty() ;
    }
};