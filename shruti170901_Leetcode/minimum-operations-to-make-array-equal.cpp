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
    int minOperations(int n) {
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(2*i+1);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=abs(2*i+1 - sum/n);
        }return cnt/2;
    }
};
