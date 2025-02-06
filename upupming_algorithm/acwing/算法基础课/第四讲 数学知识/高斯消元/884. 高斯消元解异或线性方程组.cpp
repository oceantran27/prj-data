#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;
const int N = 110;
const double eps = 1e-6;

int n;
int a[N][N];
int gauss() {
    int c, r;
    for (c = 0, r = 0; c < n; c++) {
        int t = r;
        // 选出最大的一行，移到最上面
        for (int i = r; i < n; i++) {
            if (a[i][c]) t = i;
        }
        // 如果当前这一列的最大数都是 0 ，那么所有数都是 0，就没必要去算了
        if (a[t][c] == 0) continue;
        // 交换第 t 行和第 r 行（当前的最上面一行）
        for (int i = c; i < n + 1; i++) swap(a[t][i], a[r][i]);

        // 对于下面的每一行，都要将第 c 列消成 0
        for (int i = r + 1; i < n; i++) {
            if (a[i][c]) {
                // 第 i 行整体异或 a[r][j]，因为 a[r][c] 一定为 1，所以 a[i][c] 异或 ap[r][c] 也一定为 0，也就是完成了类似浮点方程组的消元步骤
                for (int j = n; j >= c; j--) {
                    a[i][j] ^= a[r][j];
                }
            }
        }
        r++;
    }
    if (r < n) {
        // [r,n) 中一定都是系数为 0 的
        // 存在系数全为 0，常数不为 0 的行，无解
        for (int i = r; i < n; i++) {
            if (a[i][n]) return 2;
        }
        // 有全为 0 的行，并且全为 0 的行系数都为 0，无穷多解
        return 1;
    }

    for (int i = n - 1; i >= 0; i--) {
        // 第 i 行需要减去 [i+1, n) 所有的列的未知数
        for (int j = i + 1; j < n; j++) {
            a[i][n] ^= a[j][n] & a[i][j];
        }
    }
    return 0;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            cin >> a[i][j];
        }
    }
    int t = gauss();
    if (t == 0) {
        for (int i = 0; i < n; i++) {
            printf("%d\n", a[i][n]);
        }
    } else if (t == 1)
        puts("Multiple sets of solutions");
    else
        puts("No solution");
    return 0;
}
