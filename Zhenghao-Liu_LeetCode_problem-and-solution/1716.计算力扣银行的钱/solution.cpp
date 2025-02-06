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
    int totalMoney(int n) {
        int ans=0;
        int cur=0;
        int fir=0;
        for (int i=0;i<n;i++) {
            if ((i%7)==0) {
                cur=fir+1;
                fir++;
            } else {
                cur++;
            }
            ans+=cur;
        }
        return ans;
    }
};
