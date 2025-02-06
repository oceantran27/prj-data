#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// TODO

class Solution {
public:
    static bool cmp(string& num1, string& num2) {  
        return (num1 + num2) > (num2 + num1);
    }  
    
    string largestNumber(vector<int>& nums) {
        string res;
        
        std::vector<string> vec;
        for(int num : nums) {
            vec.push_back(to_string(num));
        }
        
        std::sort(vec.begin(), vec.end(), cmp);
        
        if(vec[0] == "0") {
            return "0";  //
        }
        
        for(int i = 0; i < vec.size(); i++) {
            res += vec[i];
        }
        
        return res;
    }
};

