#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
/*
对于输入样例：

  1 2 3
1 F F T
2 T T T

总共有 4 个感兴趣点，有 2 行，3 列。
对于 row:
    4 % 2 == 0，可以满足
    调整次数：1 3 -> 2 2，一次即可
对于 column:
    4 % 3 != 0，不能满足

一些更加复杂的例子：
对于每行，感兴趣点数分别为：0 0 0 0 1 3 4 8
平均为：16 / 8 = 2，目标是全部变成 2，
调整次数：
0 0 0 0 1 3 4 8
2 0 0 0 1 3 4 6 经过 2 步
2 2 0 0 1 3 4 4 经过 2 * 2 步
2 2 2 0 1 3 4 2 经过 2 * 3 步
2 2 2 2 1 3 2 2 经过 2 * 3 步
2 2 2 2 2 2 2 2 经过 1 步
                总计 19 步
关键在于两点之间的距离，距离计算需要考虑两个方向，可能经过扭曲空间
每次选择最近的两个点 a, b，并且与目标值 2 相比，一高一低，进行转移操作需要 distance(a, b) 步。
distance(a, b) = min(b - a, a + len - b)

上面只是分析了有序的情况，还有可能无序，怎么解？

接着看了一下lyd的解答，自己思考到列和行的等价性、以及整除满足性是没问题的，但是没有接触过「均分纸牌」问题，先从简单的均分纸牌问题出发，可以拓展到环形均分纸牌问题，以及环形均分纸牌可以证明最优解一定有两个人不发生纸牌交换，也就是可以枚举分开的地方从而变成朴素的均分纸牌问题。Kick Start 的 Merge Cards 跟这道题是类似的。

「普通的均分纸牌」问题可以直接通过递归求解子问题解决。
对于 0 0 0 0 1 3 4 8，先分析第 0 个元素，目标是变成 2，所以一定要从元素 1 中拿 2 过来，也就是：
2 -2  0 0   1  3 4 8 移动次数 2 - 0
接下来继续分析 -2 0 0 1 3 4 8 这个子问题即可。
   2 -4 0   1  3 4 8 移动次数 4 - 0
      2 -6  1  3 4 8 移动次数 6 - 0
         2 -7  3 4 8 移动次数 8 - 0
            2 -6 4 8 移动次数 10 - 1
...

先求一遍前缀和：0 0 0 0 1 4 8 16
总的移动次数为 \sigma_{i = 1, ..., n}|i * 2 - sum[i]|。

一通证明之后，这个问题变成了中位数 k 划分原始序列的问题，跟货仓选址是一样的了。
*/

#include <algorithm>
#include <iostream>
using namespace std;

int n, m, t, x, y, a[100010], b[100010], s[100010], nOk, mOk, nAvg, mAvg;
int main() {
    cin >> n >> m >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        // n 方向求出每行的感兴趣个数, m 方向求出每列的感兴趣个数
        a[x]++, b[y]++;
    }
    // 先考虑 n 方向，使得每行的元素个数相等；上下交换不改变每列的感兴趣元素个数
    nOk = (t % n == 0), mOk = (t % m == 0);
    nAvg = t / n, mAvg = t / m;
    long long nAns = 0, mAns = 0;
    if (nOk) {
        for (int i = 1; i <= n; i++) {
            a[i] -= nAvg;
            s[i] = s[i - 1] + a[i];
        }
        sort(s + 1, s + n + 1);
        // 这里是以 1 开始的下标，注意二分要 + 1
        int medium = s[(n + 1) / 2];
        for (int i = 1; i <= n; i++) {
            nAns += abs(medium - s[i]);
        }
    }
    if (mOk) {
        for (int i = 1; i <= m; i++) {
            b[i] -= mAvg;
            s[i] = s[i - 1] + b[i];
        }
        sort(s + 1, s + m + 1);
        int medium = s[(m + 1) / 2];
        for (int i = 1; i <= m; i++) {
            nAns += abs(medium - s[i]);
        }
    }

    if (nOk || mOk) {
        if (nOk && mOk) {
            cout << "both";
        } else if (nOk) {
            cout << "row";
        } else {
            cout << "column";
        }
        cout << " " << nAns + mAns << endl;
    } else {
        cout << "impossible" << endl;
    }

    return 0;
}