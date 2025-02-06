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
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9 + 1, m, k = -1;
        while (l <= r){
            m = (l+r) >> 1;
            long long need = 0;
            for (int i = 0; i < piles.size(); i++){
                need += (1LL * piles[i] + m - 1) / m;
            }
            if (need <= h)
                k = m, r = m - 1;
            else 
                l = m + 1;
        } 
        return k;
    }
};