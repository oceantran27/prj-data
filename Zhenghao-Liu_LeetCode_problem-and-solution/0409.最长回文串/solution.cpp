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
    int longestPalindrome(string s) {
        unordered_map<char,int> count;
        for (char &i:s)
            ++count[i];
        int ans=0;
        bool judge_one=false;
        for (auto i=count.begin();i!=count.end();++i)
            if ((i->second&1)==0)
                ans+=i->second;
            else
            {
                ans+=i->second-1;
                judge_one=true;
            }  
        return judge_one ? ans+1 : ans;
    }
};
