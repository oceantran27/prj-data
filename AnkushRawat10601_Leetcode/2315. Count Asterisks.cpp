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
    int countAsterisks(string s) {
        int bar = 0,count=0;
        for(int i = 0; i < s.size();i++)
        {
            if(bar%2 == 0 && s[i] == '*')
                count++;
            if(s[i] == '|')
                bar++;
        }
        return count;
    }
};