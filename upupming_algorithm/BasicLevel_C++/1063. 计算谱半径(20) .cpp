#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    float max = 0;
    for(int i = 0; i < n; i++) {
        float a, b, ans;
        scanf("%f%f", &a, &b);
        ans = sqrt(a * a + b * b);
        max = ans > max ? ans : max;
    }
    printf("%.2f", max);
    return 0;
}