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
    string frequencySort(string s) {
        unordered_map<char,int> c;
        for(auto x:s){
            c[x]++;
        }
        sort(s.begin(),s.end(),[&](char a,char b){
            return c[a]>c[b]||(c[a]==c[b]&&a<b);
        });
        return s;
    }
};
