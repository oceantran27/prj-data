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
        if (N<2)
            return N;
        int a=0,b=1;
        for (int i=2;i<=N;++i)
        {
            int c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};
