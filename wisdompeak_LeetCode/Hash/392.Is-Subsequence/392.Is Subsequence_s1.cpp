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
    bool isSubsequence(string s, string t) 
    {
        int i=0;
        int j=0;
        while (i<s.size() && j<t.size())
        {
            if (s[i]!=t[j])
                j++;
            else
            {
                i++;
                j++;
            }
        }
        if (i<s.size())
            return false;
        else
            return true;
    }
};
