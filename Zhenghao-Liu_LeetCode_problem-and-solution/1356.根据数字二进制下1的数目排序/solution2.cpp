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
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[](const int &A,const int &B)->bool{
            int cnt_A=__builtin_popcount(A);
            int cnt_B=__builtin_popcount(B);
            return cnt_A==cnt_B ? A<B : cnt_A<cnt_B;
        });
        return arr;
    }
};
