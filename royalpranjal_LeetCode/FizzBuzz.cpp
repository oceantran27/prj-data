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
    vector<string> fizzBuzz(int n) {
        vector<string> sol;
        
        for(int i = 1; i <= n; i++){
            string ans;
            if(i%3 == 0 && i%5 == 0){
                ans = "FizzBuzz";
            }
            else if(i%3 == 0){
                ans = "Fizz";
            }
            else if(i%5 == 0){
                ans = "Buzz";
            }
            else{
                ans = to_string(i);
            }
            sol.push_back(ans);
        }
        
        return sol;
    }
};
