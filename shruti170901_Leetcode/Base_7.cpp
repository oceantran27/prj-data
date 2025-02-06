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
    string convertToBase7(int num) {
        if(!num)
            return "0";
        string ans="",s="";
        int a ;
        if(num<0)s="-";
        num=abs(num);        
        while(num){
            a = num%7;
            ans+=to_string(a);
            num/=7;
        }
        reverse(ans.begin(),ans.end());
        return s+ans;
    }
};
