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
    bool isMonotonic(vector<int> &A) {
        return is_sorted(A.begin(), A.end()) || is_sorted(A.rbegin(), A.rend()); // 第二个迭代器是倒序的
    }
};

// 调用相关函数求解