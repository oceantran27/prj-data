#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//稍微推导一下其实就是个等差数列求和
class Solution {
public:
    int minOperations(int n) {
        return n*n/4;
    }
};
