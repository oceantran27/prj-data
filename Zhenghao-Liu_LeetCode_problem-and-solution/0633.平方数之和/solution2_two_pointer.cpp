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
    bool judgeSquareSum(int c) {
        int i=0,j=(int)sqrt(c);
        while (i<=j)
        {
            long long res=(long long)i*i+j*j;
            if (res==c)
                return true;
            else if (res>c)
                --j;
            else if (res<c)
                ++i;
        }
        return false;
    }
};
