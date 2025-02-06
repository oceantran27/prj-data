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
    int arrangeCoins(int n) {
        long long sum=0;
        int ans=1;
        while (sum+ans<=n)
        {
            sum+=ans;
            ++ans;
        }
        return ans-1; 
    }
};
