#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

231. Power of Two

Given an integer, write a function to determine if it is a power of two.



class Solution {
public:
    bool isPowerOfTwo(int n) {
        int flag=0;
        if(n<=0){
            return false;
        }
        while(n>0){
            if(n&1==1){
                if(flag==1){
                    return false;
                }
                flag=1;
            }
            n=n>>1;
        }
        return true;
    }
};