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
* 首先将1-20结果全部列出来
* 发现234/567/8910/111213/141516/171819/202122···分成3个一组
* 结果都是划分成a个3加上2或3或4
* 原因就出来于6=2+2+2=3+3而2*2*2=8 3*3=9所以尽可能往3凑，凑不到就换成2
* 但当最后一个是4，你划分成3+1的话这个1毫无作用，不如换成2+2即2*2=4
*/
class Solution {
public:
    int integerBreak(int n) {
        if (n<=4)
            return 1<<(n-2);
        int a=(n-2)/3;
        int b=n-3*a;
        return pow(3,a)*b;
    }
};
