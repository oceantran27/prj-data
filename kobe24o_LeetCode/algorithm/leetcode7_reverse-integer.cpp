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
    int reverse(int x) {
        long long int res=0;
        while(x)
        {
            res=res*10+x%10;
            x/=10;
            if(res>INT_MAX||res<INT_MIN)
                return 0;
        }
        return res;
    }
};