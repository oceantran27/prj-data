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
    int calculate(string s) {
        int x = 1, y = 0;
        for(char c : s) 
        {
            if(c == 'A')
                x = x*2+y;
            else
                y = y*2+x;
        }
        return x+y;
    }
};