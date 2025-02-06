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
    int maxDepth(string s) {
        int k=0;
        int max=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                ++count;
                if(count>=max)
                    max=count;
                k++;
            }
            else if(s[i]==')')
            {
                --count;
                
                k--;
            } 
        }
        return max;
        
    }
};