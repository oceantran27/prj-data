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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i,j,p=0;
        
        i=g.size()-1;
        j=s.size()-1;
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        while(i>=0 && j>=0){
            if(s[j]>=g[i]){
                i--;
                j--;
                p++;
            }
            else
                i--;         
        }
        return p;  
    }
};
