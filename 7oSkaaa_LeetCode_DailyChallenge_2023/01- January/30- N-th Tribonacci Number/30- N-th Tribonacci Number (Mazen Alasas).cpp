#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author : Mazen Alasas
class Solution {
public:
    int tribonacci(int n) {
        int arr[40]{};                      // array of zeros
        arr[0] = 0, arr[1] = 1, arr[2] = 1; // T0, T1, T2
        for(int i = 3; i <= n; i++)
            arr[i] += arr[i - 1] + arr[i - 2] + arr[i - 3]; // Ti = T1-1 + Ti-2 + Ti-3
        return arr[n];                      // return N-th Tribonacci Number
    }
};
