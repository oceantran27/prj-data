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
    int maxRepeating(string sequence, string word) {
        int ans = 0;
        int r = sequence.size()/word.size();
        string s;
        for(int i = 1; i <= r; ++i) 
        {
            s += word;
            if(sequence.find(s) != string::npos)
                ans = i;
            else
                break;
        }
        return ans;
    }
};