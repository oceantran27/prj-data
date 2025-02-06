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
        if(!num){
            return "0";
        }
        
        int temp = abs(num);
        string res;
        
        while(temp){
            res = to_string(temp%7) + res;
            temp/=7;
        }
        
        return num>0? res: "-"+res;
    }
};
