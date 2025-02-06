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
    int Fibonacci(int n) {
        int a=0,b=1,c=0;
        while(n--){
            c=a+b;
            a=b;
            b=c;
        }
        return a;
    }
};