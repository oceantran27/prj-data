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
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0)
            return -1;
        long long rem = 0;
        int count  = 0;
        while(true)
        {
            count++;
            rem = rem*10+1;
            rem = rem%k;
            if(rem==0) return count;
        }
        return count;
    }
};