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
    int numberOfMatches(int n) {
        int ans = 0;
        while(n >= 2)
        {
            if(n%2 == 0)
            {
                ans += n/2;
                n /= 2;
            }
            else
            {
                ans += (n-1)/2;
                n = (n-1)/2 + 1;
            }
        }
        return ans;
    }
};