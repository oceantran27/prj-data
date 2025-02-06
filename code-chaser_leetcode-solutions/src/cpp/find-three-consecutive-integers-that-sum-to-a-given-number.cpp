#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    vector<long long> sumOfThree(long long n) {
        if(n%3==0) return {n/3-1,n/3,n/3+1};
        return {};
    }
};
