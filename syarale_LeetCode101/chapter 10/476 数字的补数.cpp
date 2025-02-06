#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// 476. Number Complement 

class Solution {
public:
    int findComplement(int num) {
        int k = log2(num);
        int tmp = 0;
        for (int i = 0; i <= k; i++) {
            tmp <<= 1;
            tmp += 1;
        }

        return num ^ tmp;
    }
};
