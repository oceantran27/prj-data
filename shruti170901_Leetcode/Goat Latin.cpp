#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/goat-latin/

class Solution {
public:
    bool isVow(char x){
        x=tolower(x);
        return x=='a' || x=='e' || x=='i' || x=='o' || x=='u';
    }
    string toGoatLatin(string S) {
        stringstream ss(S);
        string ans="", a="a", temp;
        int flag=0;
        while(ss>>temp){
            if(flag) ans+=" ";
            else flag=1;
            if(!isVow(temp[0])){
                temp+=temp[0];
                temp=temp.substr(1);
            }
            temp+="ma"+a;
            a+="a";
            ans+=temp;
        }
        return ans;
    }
};