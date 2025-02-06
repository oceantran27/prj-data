#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> Stack;
        for(int i{0}; i<s.length(); ++i){
            char ch;
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                Stack.push(s[i]);
            }
            if(Stack.empty()){
                return false;
            }
            switch(s[i]){
                case ')':
                    ch = Stack.top();
                    Stack.pop();
                    if(ch == '[' || ch == '{'){
                        return false;
                    }
                    break;
                case ']':
                    ch = Stack.top();
                    Stack.pop();
                    if(ch == '(' || ch == '{'){
                        return false;
                    }
                    break;
                case '}':
                    ch = Stack.top();
                    Stack.pop();
                    if(ch == '(' || ch == '['){
                        return false;
                    }
                    break;
            }
        }
        return Stack.empty();
        
    }
};
