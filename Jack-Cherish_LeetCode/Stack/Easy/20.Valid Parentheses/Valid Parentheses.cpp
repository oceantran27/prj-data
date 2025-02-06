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
        stack<char> stk;
        for(char c : s){
            switch(c){
                case '(':
                case '[':
                case '{':stk.push(c);break;
                case ')':if(stk.empty() || stk.top() != '(') return false;else stk.pop();break;
                case ']':if(stk.empty() || stk.top() != '[') return false;else stk.pop();break;
                case '}':if(stk.empty() || stk.top() != '{') return false;else stk.pop();break;
                default:break;
            }
        }
        return stk.empty();
    }
};