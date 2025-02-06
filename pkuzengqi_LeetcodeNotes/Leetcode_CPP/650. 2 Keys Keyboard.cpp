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
    int minSteps(int n) {
        int i=2, ans=0;
        while(n>1){
          while(n%i==0) n/=i,ans+=i;
          ++i;
        }
        return ans;
    }
};