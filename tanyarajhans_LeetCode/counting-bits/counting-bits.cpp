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
    vector<int> countBits(int num) {
        vector<int> t(num+1);
        if(num==0)
            return {0};
        t[0]=0;
        t[1]=1;
        for(int i=2;i<=num;i++){
            if(i%2==0)
                t[i]=t[i/2];
            else
                t[i]=t[i/2]+1;
        }
        return t;
    }
};