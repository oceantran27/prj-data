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
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        vector<int> s;
        int i=0,j=0;
        while(i<pushed.size() && j<popped.size()){
            while(s.empty() || s.back()!=popped[j]){
                s.push_back(pushed[i]);
                i++;
            }
            while(!s.empty() && s.back()==popped[j]){
                s.pop_back();
                j++;
            }
        }
        return (s.size() == 0);
    }
};
