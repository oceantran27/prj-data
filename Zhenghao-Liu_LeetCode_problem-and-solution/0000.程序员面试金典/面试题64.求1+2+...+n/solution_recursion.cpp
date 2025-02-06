#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//利用短路逻辑
class Solution {
public:
    int sumNums(int n) {
        n>1 && (n+=sumNums(n-1));
        return n;
    }
};
