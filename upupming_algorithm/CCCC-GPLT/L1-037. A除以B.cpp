#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d/", a);
    if (b >= 0)
        printf("%d=", b);
    else
        printf("(%d)=", b);
    if (b == 0)
        printf("Error");
    else
        printf("%.2f", a * 1.0 / b);
    return 0;
}