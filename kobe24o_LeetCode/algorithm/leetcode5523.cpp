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
    int minOperations(vector<string>& logs) {
        int deep = 0;
        for(auto& log : logs)
        {
            if(log[0] != '.')// x/ 深度+1
                deep++;
            else if(log[1] == '.')// .. 上一层
            {
                deep--;
                if(deep < 0)
                    deep = 0;
            }
        }
        return deep;
    }
};