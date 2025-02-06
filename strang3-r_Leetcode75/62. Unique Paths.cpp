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
    int uniquePaths(int m, int n) {
        if(m<n)
            swap(m,n);
        double res=1.0;
        for(int i=1;i<n;i++)
            res=res*(m-1+i)/i;
        return (int)res;
    }
};
