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
    int leastMinutes(int n) {
        int cur=1;
        int ans=0;
        while (cur<n) {
            cur*=2;
            ans++;
        }
        return ans+1;
    }
};