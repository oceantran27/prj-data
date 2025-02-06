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
    bool isPowerOfFour(int n) {
        for(int i=0;i<32;i+=2){
            if(n==(1<<i))
                return true;
        }
        return false;
    }
};