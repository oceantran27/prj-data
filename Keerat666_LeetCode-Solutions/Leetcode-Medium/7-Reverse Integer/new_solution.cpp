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
    int reverse(int x) {
//         value of INT_MAX IS +214748907,
//         value of INT_MIN IS -214748907,
        long long int ans=0;
        if(x/10==0){
            return x;
        }
        while(x){
            ans = ans*10+x%10;
            x=x/10;
        }
        return(ans<INT_MIN || ans>INT_MAX)?0:ans;
    }
};
