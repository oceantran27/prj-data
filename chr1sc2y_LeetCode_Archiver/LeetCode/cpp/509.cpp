#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int fib(int N) {
        if(N == 0)
            return 0;
        int i = 0, j = 1;
        while (N > 1) {
            int temp = i + j;
            i = j;
            j = temp;
            --N;
        }
        return j;
    }
};
