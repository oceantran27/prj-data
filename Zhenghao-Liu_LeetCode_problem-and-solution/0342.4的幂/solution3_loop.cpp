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
    bool isPowerOfFour(int num) {
        long long a=1;
        while (a<num)
            a<<=2;
        return a==num;
    }
};
