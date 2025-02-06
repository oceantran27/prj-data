#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    char findTheDifference(string s, string t) 
    {
        int count[26];
        for(int i=0;i<26;i++)
        {
            count[i] = 0;
        }
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            count[t[i]-'a'] -=1;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i] < 0)
                return 'a'+i;
        }
        return 0;
    }
};