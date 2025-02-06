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
    int maximumScore(int a, int b, int c) {
        if(a>b)
            return maximumScore(b,a,c);
        else if(b>c)
            return maximumScore(a,c,b);
        else if(a+b<=c)
            return a+b;
        else
            return (a+b-c)/2+c;
    }
};