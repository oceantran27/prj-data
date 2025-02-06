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
    int N;
    cin >> N;
    char c;
    cin >> c;
    int t = N / 2 + N % 2;
    for (int i = 0; i < t - 1; i++) {
        for (int k = 0; k < N; k++)
            cout << c;
        cout << endl;
    }
    for (int i = 0; i < N; i++)
        cout << c;
    return 0;
}