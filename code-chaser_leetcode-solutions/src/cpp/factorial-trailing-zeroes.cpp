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
    int trailingZeroes(int N) {
        int ans=0;
        while(N>0){
            ans=ans+(N/5);
            N=N/5;
        }
        return ans;
    }
};
