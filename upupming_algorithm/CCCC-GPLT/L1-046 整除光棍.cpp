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
    int n, ans = 1, cnt = 1;
    cin >> n;
    while (ans < n) {
        ans = ans * 10 + 1;
        cnt++;
    }
    while(1){
        cout << ans / n;
        if(ans % n == 0) break;
        ans = (ans % n) * 10 + 1;
        cnt++;
    }
    cout << ' ' <<  cnt;
    return 0;
}

