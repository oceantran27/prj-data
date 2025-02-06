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
    string interpret(string s) {
        string ans = "";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='G')
                ans += 'G';
            else if(s[i]==')')
                ans += 'o';
            else if(s[i]=='a')
            {
                ans += {"al"};
                i += 2;
            }
        }
        return ans;
    }
};