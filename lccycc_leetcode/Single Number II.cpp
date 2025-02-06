#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

typedef unsigned long long LL;
class Solution {
public:
    int singleNumber(int A[], int n) {
        int a = 0, b = 0;
        for (int i = 0; i<n; i++){
            int nb = ~(a^b);
            a = (A[i]&b)|((~A[i])&a);
            b = (A[i]&nb)|((~A[i])&b);
        }
        return b;
    }
};
