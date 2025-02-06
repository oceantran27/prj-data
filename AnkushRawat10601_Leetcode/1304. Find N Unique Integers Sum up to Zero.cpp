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
    vector<int> sumZero(int n) {
        vector<int> v(n,0);
        if(n%2==1){
            for(int i=n/2+1;i<n;i++){
                v[i]=i;
                v[n-i-1]=-1*i;   // n=5 [-4,-3,0,3,4]
            }
        }
        else{
            for(int i=n/2;i<n;i++){
                v[i]=i;
                v[n-i-1]=-1*i; // n=4 [-3,-2,2,3]
            }
        }
        return v;
    }
};