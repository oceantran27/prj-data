#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//一个整数如果是2的幂次方，必定可以被2的31次幂整除。
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && 2147483648%n==0;
    }
};
