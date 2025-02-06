#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//用十进制变二进制方法求末尾两个位是否不同
class Solution {
public:
    bool hasAlternatingBits(int n) {
        while (n>0)
        {
            if (n%2==n/2%2)
                return false;
            n/=2;
        }
        return true;
    }
};
