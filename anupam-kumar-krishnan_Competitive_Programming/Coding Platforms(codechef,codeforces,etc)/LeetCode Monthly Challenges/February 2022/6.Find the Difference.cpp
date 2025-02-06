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
char findTheDifference(string s, string t) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans-=s[i];
            ans-=t[i];
        }
        ans+=t[s.size()];  
        return ans;
    }
};
