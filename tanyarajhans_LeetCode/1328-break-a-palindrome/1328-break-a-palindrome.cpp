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
    string breakPalindrome(string s) {
        int n=s.size();
        string ans;
        if(n==1)
            return ans;
        ans=s;
        bool f=true;
        for(int i=0;i<n/2;i++){
            if(s[i]!='a'){
                ans[i]='a';
                return ans;
            }
        }
        ans[n-1]='b';
        return ans;
    }
};