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
    int lastRemaining(int n, int m){
        if(n==1) return 0;
        return (lastRemaining(n-1,m)+m)%n;
    }
};