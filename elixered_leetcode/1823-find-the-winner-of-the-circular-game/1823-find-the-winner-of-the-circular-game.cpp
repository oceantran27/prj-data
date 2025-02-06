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
    
    int recur(int n, int k)
    {
        if(n==1) return 0;
        return (k+recur(n-1,k))%n;
    }
    
    int findTheWinner(int n, int k) {
        return recur(n,k)+1;
    }
};