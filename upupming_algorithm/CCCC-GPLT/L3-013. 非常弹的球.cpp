#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <cstdio>
int main() {
    double w, p, v2, s = 0;
    scanf("%lf%lf", &w, &p);
    v2 = 2 * 1000 * 100 / w;
    while (v2 > 0.000001) {
        s += v2 / 9.8;
        v2 *= (100 - p) * 0.01;
    }
    printf("%.3f", s);
    return 0;
}
