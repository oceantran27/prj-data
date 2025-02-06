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
        int k = 0;
        s += " ";
        string ans = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                string word = s.substr(k,i-k);
                reverse(word.begin(), word.end());
                ans = ans + word;
                if(i != s.size()-1) ans+=" ";
                k = i+1;
            }
        }
        return ans;
    }
};
