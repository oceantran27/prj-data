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
    int maxPower(string s) {
        int num=1,max=1;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]==s[i+1])
            {
                num++;
                max = max>num?max:num;
            }
            else
            {
                num=1;
            }
        }
        return max;
    }
};
