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
        stack<int> s;
        int n=pushed.size();
        int j=0;
        for(int i=0;i<n;i++){
            s.push(pushed[i]);
            while(!s.empty() && popped[j]==s.top()){
                s.pop();
                j++;
            }
        }
        return j==n;
    }
};