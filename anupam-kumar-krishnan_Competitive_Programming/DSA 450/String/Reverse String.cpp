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
    void reverseString(vector<char>& s) {
       int left=0;
       int right=s.size()-1;
       while(left<right){
           swap(s[left],s[right]);
           left++;
           right--;
       } 
    }
};
