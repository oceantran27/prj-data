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
    int integerBreak(int n) {
        if(n<=3) return (n-1);
        int res=1;
        if(n%3==1) res=4,n-=4;
        else if(n%3==2) res=2,n-=2;
        while(n) res*=3,n-=3;
        return res;
    }
};