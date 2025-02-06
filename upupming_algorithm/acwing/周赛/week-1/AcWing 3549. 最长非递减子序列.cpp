#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
const int N = 1e6 + 10;

/*
答案一定是 1*2*1*2* 这样最长的子序列，翻转之后变成 1*1*2*2*=1*2* 这样的子序列（可以用反证法说明）

f[i][j]：
状态表示:
    表示 a[1]~a[i] 中，所有满足模式 j 的「子序列」的「最长」长度
    每一个模式表示一种子序列形式，有点类似正则表达式
    模式 0: 1*
    模式 1: 1*2*
    模式 2: 1*2*1*
    模式 3: 1*2*1*2*
状态计算:
    参考代码
最终答案:
    f[n][3]

可以直接去掉 f 的第一维，变成一维 DP
*/

using namespace std;

int f[N][10];

int main() {
    int n;
    int x;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &x);
        f[i][0] = f[i - 1][0] + (x == 1);
        f[i][1] = max(f[i][0], f[i - 1][1] + (x == 2));
        f[i][2] = max(f[i][1], f[i - 1][2] + (x == 1));
        f[i][3] = max(f[i][2], f[i - 1][3] + (x == 2));
    }
    printf("%d\n", f[n][3]);
}
