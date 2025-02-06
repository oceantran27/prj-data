#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n, jia = 0, yi = 0, jiahan, jiahua, yihan, yihua, sum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> jiahan >> jiahua >> yihan >> yihua;
        sum = jiahan + yihan;
        if (sum == jiahua && sum != yihua)
            yi++;
        if (sum != jiahua && sum == yihua)
            jia++;
    }
    cout << jia << " " << yi;
    return 0;
}