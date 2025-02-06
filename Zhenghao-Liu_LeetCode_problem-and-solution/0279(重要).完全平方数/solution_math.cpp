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
* [拉格朗日四平方和定理](https://blog.csdn.net/l_mark/article/details/89044137)
* 定理内容：每个正整数均可表示成不超过四个整数的平方之和，即答案只有1、2、3、4
* 重要的推论：
  1. 数n如果只能表示成四个整数的平方和，不能表示成更少的数的平方之和，必定满足n=(4^a)*(8b+7)
  2. 如果 n%4==0，k=n/4，n 和 k 可由相同个数的整数表示
* 如何利用推论求一个正整数最少需要多少个数的平方和表示：
  1. 先判断这个数是否满足 n=(4^a)*(8b+7)，如果满足，那么这个数就至少需要 4 个数的平方和表示，即答案为4。
  2. 如果不满足，再在上面除以 4 之后的结果上暴力尝试只需要 1 个数就能表示和只需要 2 个数就能表示的情况。
  3. 如果这个数本来就是某个数的平方，那么答案就是1
  4. 如果答案是2的话，那么n=a^2+b^2，枚举a即可
  5. 如果还不满足，那么就只需要 3 个数就能表示
*/
class Solution {
public:
    int numSquares(int n) {
        //步骤3：这个数本来就是某个数的平方
        if (pow(int(sqrt(n)),2)==n)
            return 1;
        //借用推论2
        while(n%4==0)
            n=n/4;
        //借用推论1
        if ((n-7)%8==0)
            return 4;
        //步骤4
        for (int b,a=1;a*a<n;++a)
        {
            b=int(sqrt(n-a*a));
            if (a*a+b*b==n)
                return 2;
        }
        //步骤5：最后情况
        return 3;
    }
};
