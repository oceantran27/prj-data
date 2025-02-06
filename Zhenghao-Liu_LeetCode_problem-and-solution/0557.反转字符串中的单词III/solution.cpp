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
        if (s.empty())
            return "";
        stringstream ss;
        ss << s;
        string ans;
        string words;
        while (ss >> words)
        {
            reverse(words.begin(),words.end());
            ans+=words+" ";
        }
        ans.pop_back();
        return ans;
    }
};
