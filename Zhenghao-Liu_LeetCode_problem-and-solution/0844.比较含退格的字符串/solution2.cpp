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
    bool backspaceCompare(string S, string T) {
        int S_size=del_str(S);
        int T_size=del_str(T);
        if (S_size!=T_size)
            return false;
        S.resize(S_size);
        T.resize(T_size);
        return S==T;
    }
    int del_str(string &s)
    {
        int idx=0;
        for (char i:s)
            if (i=='#')
                idx=max(idx-1,0);
            else
            {
                s.at(idx)=i;
                ++idx;
            }
        return idx;
    }
};
