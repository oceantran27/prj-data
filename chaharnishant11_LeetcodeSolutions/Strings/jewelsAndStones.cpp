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
    int numJewelsInStones(string J, string S) {
        int ans=0;
        unordered_map<char,int> map;
        for(int i=0;J[i]!='\0';i++){
            if(map.find(J[i])==map.end()){
                map[J[i]]=1;
            }
        }
        for(int i=0;S[i]!='\0';i++){
            if(map.find(S[i])!=map.end()){
                ans++;
            }
        }
        return ans;
    }
};
