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
    int sumNums(int n) {
        n && (n += sumNums(n-1)); // 利用与运算的特性，前面为0了就不会计算后面的了，避免了if判断
        return n;
    }
};