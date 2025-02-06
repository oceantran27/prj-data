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
    int countSegments(string s) {
        int ans = 0, n = s.size(), i = 0;
        
        bool going = false;
        
        while(i < n){
            if(isspace(s[i])){
                if(going){
                    ans++;
                    going = false;
                }
            }
            else{
                going = true;
            }
            
            i++;
        }
        
        if(going){
            ans++;
        }
        
        return ans;
    }
};
