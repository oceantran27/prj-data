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
    int getSum(int a, int b) {
        unsigned int carry=a&b;
        unsigned int sum=a^b;
        if(carry==0)
            return sum;
        carry<<=1;
        return getSum(sum, carry);
    }
};