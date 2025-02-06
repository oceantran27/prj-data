#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
* 1二进制为1B，0为0B
* 2二进制为10B，1为01B
* 4二进制为100B,3为011B
* 8二进制为1000B，7为0111Bc
* 2的冥转成二进制就是左边1加上多个0
* 那么2的冥减一就是左边0加上多个1
* 那么采用与运算n&n-1结果一定为0
* 注意运算符优先-优先于==优先于&
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (n&n-1)==0;
    }
};
