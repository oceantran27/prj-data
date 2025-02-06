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
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0, pow=31;
        while(n!=0){
            ans+=(n&1)<<pow;
            n=n>>1;
            pow-=1;
        }
        return ans;
    }
};
