#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//2次幂则2进制中只有1个1
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && bitset<31>(n).count()==1;
    }
};
