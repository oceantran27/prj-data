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
    int bitwiseComplement(int n) {
        int m=n;
       int ignore=0;
        
        if(m==0){
            return 1;
        }
        
        while(m!=0){
            ignore=(ignore << 1) | 1;
            m = m >> 1;
        }
        
        int ans= (~n) & ignore;
        return ans;
    }
};