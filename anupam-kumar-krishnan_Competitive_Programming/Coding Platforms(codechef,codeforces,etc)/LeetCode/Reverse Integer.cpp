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
        int  res = 0;
        while (x!=0){
            if (res > INT_MAX/10 || res < INT_MIN/10)
            {
                return 0;
            }
            res = res*10+ x%10;
            x= x/10;
        }
        return res;
    }
};
