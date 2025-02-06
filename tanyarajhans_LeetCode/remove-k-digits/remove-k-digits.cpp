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
    string removeKdigits(string num, int k) {
        string ans="";
        for(char c: num){
            while(ans.back()>c && ans.size()>0 && k>0){
                ans.pop_back();
                k--;
            }
            if(ans.size()!=0)
             ans.push_back(c);
            else if(c!='0')
             ans.push_back(c);
        }
        while(k>0 && ans.size()!=0){
            ans.pop_back();
            k--;
        }
        return (ans.size()==0)?"0":ans;
    }
};