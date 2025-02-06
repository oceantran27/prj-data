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
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        int s = 0 , e = numbers.size()-1;
        while(s<e){
            if(numbers[s]+numbers[e]==target){
                return {s+1,e+1};
            }
            else if(numbers[s]+numbers[e]>target){
                e--;
            }
            else{
                s++;
            }
        }
        return {};
    }
};
