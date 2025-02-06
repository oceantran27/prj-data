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
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool flag = true;
        for(int i = 0; i < s1.size(); ++i)
        {
            flag &= (s1[i]>=s2[i]);
            if(!flag)
                break;
        }
        if(flag)
            return flag;
        flag = true;
        for(int i = 0; i < s1.size(); ++i)
        {
            flag &= (s1[i]<=s2[i]);
            if(!flag)
                break;
        }
        return flag;
    }
};