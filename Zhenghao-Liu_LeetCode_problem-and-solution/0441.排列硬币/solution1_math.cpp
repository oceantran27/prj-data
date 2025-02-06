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
        long long ans=1;
        long long res=1;
        while (res<=n)
        {
            ++ans;
            res=(ans+ans*ans)/2;
        }
        return ans-1; 
    }
};
