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
    string reverseWords(string s) {
        string result = "";
        stack<char> word;
        int flag = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') 
                word.push(s[i]);
            if (s[i] == ' ' || i == s.length() - 1) {
                if (flag == 1) result += " ";
                while (!word.empty()) {
                    result += word.top();
                    word.pop();
                    flag = 1;
                }
            }
        }
        return result;
    }
};