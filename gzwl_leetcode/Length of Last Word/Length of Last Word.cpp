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
    int lengthOfLastWord(string s) {
        int n = s.size();
        int cnt = 0;
        for(int i = n - 1; i >= 0; i--){
            if(s[i] == ' ' && cnt)  break;
            if(s[i] != ' ')     cnt++;
        }
        return cnt;
    }
};

