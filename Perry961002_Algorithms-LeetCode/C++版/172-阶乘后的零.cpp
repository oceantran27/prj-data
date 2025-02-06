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
    int trailingZeroes(int n) {
        int result = 0;
        while(n)  //找5的个数
        {
            result += n/5;
            n /= 5;
        }
        return result;
    }
};