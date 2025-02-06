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
 * 其实这种变为全0的操作就是格雷码为n的解码
 * [格雷码百度百科](https://baike.baidu.com/item/%E6%A0%BC%E9%9B%B7%E7%A0%81)
 * 格雷码→二进制码（解码）：
 * 从左边第二位起，将每位与左边一位解码后的值异或，作为该位解码后的值（最左边一位依然不变）。
 * 依次异或，直到最低位。依次异或转换后的值（二进制数）就是格雷码转换后二进制码的值。
 * eg:n=1110
   1. n的左边第二位：1，与前一位已经解码：1，进行异或，1^1=0，所以数字变成10xx
   2. n的左边第三位：1，与前一位已经解码：0，进行异或，1^0=1，所以数字变成101x
   3. n的左边第四位：0，与前一位已经解码：1，进行异或，0^1=1，所以数字变成1011
   所以答案就是1011B=11D
 */
class Solution {
public:
    int minimumOneBitOperations(int n) {
        bitset<32> bs_n(n);
        bitset<32> bs_ans(n);
        for (int i=32-1-1;i>=0;--i)
            bs_ans[i]=bs_n[i]^bs_ans[i+1];
        return bs_ans.to_ulong();
    }
};
