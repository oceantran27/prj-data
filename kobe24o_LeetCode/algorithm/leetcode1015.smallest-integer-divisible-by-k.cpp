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
    int smallestRepunitDivByK(int K) {
        if((K&1)==0 || K%5==0) return -1;
        int len = 1, num = 1;
        while(num%K != 0)
        {
            num = num*10+1;
            num %= K;
            len++;
        }
        return len;
    }
};