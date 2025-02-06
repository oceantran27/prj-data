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
    int scoreOfParentheses(string s) {
        int ans = 0;
        int n = s.size();
        int bal = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==')')
            {
                bal--;
                continue;
            }
            while(i<n && s[i]=='(')
            {
                bal++;
                i++;
            }
            i--;
            ans += pow(2,bal-1);
        }
        return ans;
    }
};