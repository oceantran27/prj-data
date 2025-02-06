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
    int countNumbersWithUniqueDigits(int n) {
        int ans = 0;
        int curr = 1;
        for(int i=0; i<=n; ++i){
            if(i == 0)
                curr = 1;
            else if(i <= 2)
                curr *= 9;
            else
                curr *= (11 - i);
            ans += curr;
        }
        return ans;
    }
};