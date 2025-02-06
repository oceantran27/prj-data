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
    int minAddToMakeValid(string S) {
        int l=0,r=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='('){
                l++;
            }
            else{
                if(l>0)
                    l--;
                else r++;
            }
        }
        return l+r;
    }
};
