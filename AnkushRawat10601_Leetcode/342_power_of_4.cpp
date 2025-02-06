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
    bool isPowerOfFour(int n) {
        long long p=1;
        for(int i=0;p<=n;i++){
            p=pow(4,i);
            if(p==n){
                return true;
            }
        }
    return false;}
};