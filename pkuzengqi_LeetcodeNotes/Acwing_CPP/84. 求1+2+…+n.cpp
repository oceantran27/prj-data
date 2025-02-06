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
    int getSum(int n) {
        int res=n;
        (n>0) && (res+=getSum(n-1));
        return res;
    }
};