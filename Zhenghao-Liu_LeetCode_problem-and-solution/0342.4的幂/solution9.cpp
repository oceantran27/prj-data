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
* 首先保证是2的幂即2进制下只有1个1其他全为0
* 4的幂看下1、100、10000都是奇数上为1偶数上为0
* 则通过与01010101010101010101010101010101B相与且还是num本身则符合上述条件
* 即1431655765D或0x55555555
*/
class Solution {
public:
    bool isPowerOfFour(int num) {
        return num>0 && (num&num-1)==0 && (num&1431655765)==num;
    }
};
