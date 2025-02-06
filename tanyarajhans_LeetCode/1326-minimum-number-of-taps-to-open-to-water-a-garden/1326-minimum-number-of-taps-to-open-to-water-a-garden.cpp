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
    int minTaps(int n, vector<int>& ranges) {
        int mini=0;
        int maxi=0;
        int taps=0;
        while(maxi<n){
            for(int i=0;i<=n;i++){
                if(i-ranges[i]<=mini && i+ranges[i]>maxi){
                    maxi=i+ranges[i];
                }
            }
            if(mini==maxi)
                return -1;
            taps++;
            mini=maxi;
        }
        return taps;
    }
};