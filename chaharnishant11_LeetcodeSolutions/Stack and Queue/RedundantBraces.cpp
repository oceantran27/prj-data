#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

int Solution::braces(string A) {
    stack<char> s;
    for(auto i:A){
        if(i==')'){
            char top=s.top();
            s.pop();
            bool flag = true; 
  
            while (top != '(') { 
                if (top == '+' || top == '-' ||  top == '*' || top == '/') 
                    flag = false; 
                top = s.top(); 
                s.pop(); 
            }
            if(flag) return 1;
        }
        s.push(i);
    }
    return 0;
}
