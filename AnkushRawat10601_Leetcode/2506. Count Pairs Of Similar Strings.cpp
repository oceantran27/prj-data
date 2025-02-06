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
    int similarPairs(vector<string>& w){
        int n = w.size();
        int count = 0;
        for(int i=0;i<n;i++){
            set<char> s(w[i].begin(),w[i].end());
            string s1(s.begin(),s.end());
            w[i] = s1;
        }
        for(int i =0;i<n-1;i++)
            for(int j = i+1; j<n; j++)
                if(w[i]==w[j])
                    count++;
        return count;
    }
};