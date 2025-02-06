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
    int mirrorReflection(int p, int q) {
        int ref=p,ext=q;
        while(ref%2==0&& ext%2==0){
            ref/=2;
            ext/=2;
        }
        if(ext%2==0&& ref%2!=0) return 0;
        if(ext%2!=0&& ref%2==0) return 2;
        if(ext%2!=0&& ref%2!=0) return 1;
        return -1;
    }
};