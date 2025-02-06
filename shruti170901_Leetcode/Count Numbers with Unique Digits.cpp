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
    int func(int n){
        int res=9;
        for(int i=1; i<n; i++) res*=(9-i+1);
        return res;
    }
    int countNumbersWithUniqueDigits(int n) {
        int ans=1;
        for(int i=1; i<=n; i++)ans += func(i);
        return ans;
    }
};