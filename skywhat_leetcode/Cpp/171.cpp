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
    int titleToNumber(string s) {
        int num = 0;
        for(int i=0;i<s.size();++i){
            num = num*26 + (s[i]-'A'+1);
        }
        
        return num;
    }
};
