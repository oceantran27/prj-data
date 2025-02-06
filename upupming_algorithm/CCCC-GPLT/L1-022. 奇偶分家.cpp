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
    int n, cnta = 0, cntb = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if(temp % 2 == 0)
            cntb++;
        else
            cnta++;
    }
    cout << cnta << " " << cntb;
    return 0;
}