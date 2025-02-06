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
    int numJewelsInStones(string J, string S) {
        
        int ctr = 0;
        set<char> j;
        for(int i=0;i<J.length();i++)
            j.insert(J[i]);
        
        for(int i=0;i<S.length();i++)
        {
            if(j.find(S[i])!=j.end())
                ctr++;
        }
        return ctr;
    }
};
