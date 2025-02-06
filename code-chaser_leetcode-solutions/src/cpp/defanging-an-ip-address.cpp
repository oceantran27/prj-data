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
    string defangIPaddr(string address) {
        string ans="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                ans+="[.]";
            }
            else{
                ans+=address[i];
            }
        }
        return ans;
    }
};
//https://leetcode.com/submissions/detail/791753767/